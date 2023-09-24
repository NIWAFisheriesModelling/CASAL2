/**
 * @file HockeyStick.Test.cpp
 * @author  Arnaud Grüss and Vidette McGregor
 * @version 1.0
 * @date 20/09/2023
 * @section LICENSE
 *
 * Copyright NIWA Science �2023 - www.niwa.co.nz
 *
 * $Date: 2023-09-20 12:00:00 NZ (Wed, 20 Sep 2023) $
 */
#ifdef TESTMODE
#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "../../TestResources/MockClasses/Model.h"
#include "../../TestResources/MockClasses/ModelLength.h"
#include "HockeyStick.h"

// Namespaces
namespace niwa {

using ::testing::Return;
using ::testing::ReturnRef;

/**
 * Test the results of our HockeyStick are correct
 */
TEST(Selectivities, HockeyStick_Age) {
  shared_ptr<MockModel> model = shared_ptr<MockModel>(new MockModel());
  EXPECT_CALL(*model, min_age()).WillRepeatedly(Return(10));
  EXPECT_CALL(*model, max_age()).WillRepeatedly(Return(20));
  EXPECT_CALL(*model, age_spread()).WillRepeatedly(Return(11));
  EXPECT_CALL(*model, partition_type()).WillRepeatedly(Return(PartitionType::kAge));

  niwa::selectivities::HockeyStick hockeystick(model);
  hockeystick.parameters().Add(PARAM_LABEL, "unit_test_hockeystick", __FILE__, __LINE__);
  hockeystick.parameters().Add(PARAM_TYPE, "not needed in test", __FILE__, __LINE__);
  hockeystick.parameters().Add(PARAM_LE, "13", __FILE__, __LINE__);
  hockeystick.parameters().Add(PARAM_HE, "18", __FILE__, __LINE__);
  hockeystick.Validate();
  hockeystick.Build();

  ASSERT_THROW(hockeystick.GetAgeResult(9, nullptr), std::string);  // Below model->min_age()
  EXPECT_DOUBLE_EQ(0.0, hockeystick.GetAgeResult(10, nullptr));     // At model->min_age()
  EXPECT_DOUBLE_EQ(0.0, hockeystick.GetAgeResult(11, nullptr));
  EXPECT_DOUBLE_EQ(0.0, hockeystick.GetAgeResult(12, nullptr));
  EXPECT_DOUBLE_EQ(0.0, hockeystick.GetAgeResult(13, nullptr));
  EXPECT_DOUBLE_EQ(0.20000000000000001, hockeystick.GetAgeResult(14, nullptr));
  EXPECT_DOUBLE_EQ(0.40000000000000002, hockeystick.GetAgeResult(15, nullptr));
  EXPECT_DOUBLE_EQ(0.59999999999999998, hockeystick.GetAgeResult(16, nullptr));
  EXPECT_DOUBLE_EQ(0.80000000000000004, hockeystick.GetAgeResult(17, nullptr));
  EXPECT_DOUBLE_EQ(1.0, hockeystick.GetAgeResult(18, nullptr));
  EXPECT_DOUBLE_EQ(1.0, hockeystick.GetAgeResult(19, nullptr));
  EXPECT_DOUBLE_EQ(1.0, hockeystick.GetAgeResult(20, nullptr));      // At model->max_age()
  ASSERT_THROW(hockeystick.GetAgeResult(21, nullptr), std::string);  // This is above model->max_age()
}

TEST(Selectivities, HockeyStick_Length) {
  shared_ptr<MockModelLength> model = shared_ptr<MockModelLength>(new MockModelLength());
  vector<double> lengths = {10, 20, 30, 40, 50, 60, 120};
  EXPECT_CALL(*model, length_bin_mid_points()).WillRepeatedly(ReturnRef(lengths));
  EXPECT_CALL(*model, partition_type()).WillRepeatedly(Return(PartitionType::kLength));

  niwa::selectivities::HockeyStick hockeystick(model);

  vector<double> expected_values = {0, 0, 0.16666666666666666, 0.5, 0.83333333333333337, 1, 1};

  hockeystick.parameters().Add(PARAM_LABEL, "unit_test_hockeystick", __FILE__, __LINE__);
  hockeystick.parameters().Add(PARAM_TYPE, "not needed in test", __FILE__, __LINE__);
  hockeystick.parameters().Add(PARAM_LE, "25", __FILE__, __LINE__);
  hockeystick.parameters().Add(PARAM_HE, "55", __FILE__, __LINE__);
  hockeystick.Validate();
  hockeystick.Build();

  for (unsigned i = 0; i < lengths.size(); ++i) {
    EXPECT_DOUBLE_EQ(expected_values[i], hockeystick.GetLengthResult(i));
  }
}

} /* namespace niwa */
#endif
