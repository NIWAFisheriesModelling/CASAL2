//============================================================================
// Name        : English.h
// Author      : S.Rasmussen
// Date        : 18/07/2008
// Copyright   : Copyright NIWA Science �2008 - www.niwa.co.nz
// Description :
// $Date: 2008-03-04 16:33:32 +1300 (Tue, 04 Mar 2008) $
//============================================================================
#ifndef ENGLISH_UK_H_
#define ENGLISH_UK_H_

// WARNING
// TEXT STRING DEFINED AS PARAM_X MUST BE LOWERCASE ONLY

//**********************************************************************
// BASE CONFIGURATION
//
//**********************************************************************
// Configuration File Syntax Strings
#define CONFIG_ARRAY_END                    "]"
#define CONFIG_ARRAY_START                  "["
#define CONFIG_CATEGORY_SEPARATOR           "."
#define CONFIG_END_REPORT                   "*end"
#define CONFIG_FALSE                        "false"
#define CONFIG_FALSE_SHORT                  "f"
#define CONFIG_INCLUDE                      "!include"
#define CONFIG_JOIN_OPERATOR                "+"
#define CONFIG_LIST_OPERATOR                ","
#define CONFIG_MULTI_COMMENT_END            "}"
#define CONFIG_MULTI_COMMENT_START          "{"
#define CONFIG_RATIO_SEPARATOR              ":"
#define CONFIG_RANGE_OPERATOR               ":"
#define CONFIG_SECTION_SYMBOL               "@"
#define CONFIG_SEPERATOR_ESTIMATE_VALUES    ","
#define CONFIG_SINGLE_COMMENT               "#"
#define CONFIG_TRUE                         "true"
#define CONFIG_TRUE_SHORT                   "t"
#define CONFIG_WILDCARD_MULTIPLE            "*"
#define CONFIG_WILDCARD_SINGLE              "?"

//**********************************************************************
// REPORT
//
//**********************************************************************
// Report output Syntax Strings
#define REPORT_END                           "*end"
#define REPORT_R_COMPLETE_VECTOR             "{c}"
#define REPORT_R_DATAFRAME                   "{d}"
#define REPORT_R_MATRIX                      "{m}"
#define REPORT_R_NAMED_COMPLETE_VECTOR       "{C}"
#define REPORT_R_LIST                        "{L}"
#define REPORT_R_LIST_END                    "end {L}"
#define REPORT_R_LIST_ELEMENT_SEPERATOR      ":"
#define REPORT_R_VECTOR                      "{v}"


//**********************************************************************
// FMM
//
//**********************************************************************
#define FMM_MANY_FUNCTION_EVALUATIONS             "Numerical_differences: Too many function evaluations"
#define FMM_MANY_LOOPS_LINEAR_SEARCH              "Numerical_differences: Too many loops in this linear search"
#define FMM_SMALL_LINEAR_STEP_SIZE                "Numerical_differences: Linear step size too small"
#define FMM_MANY_QUASI_NEWTON_ITERATIONS          "Numerical_differences: Too many quasi-newton iterations"
#define FMM_ITERATION                             "Numerical_differences: Iteration = "
#define FMM_FUNCTION_VALUE                        "Numerical_differences: Function value = "
#define FMM_CURRENT_PARAMETER_ESTIMATES           "Numerical_differences: Current parameter estimates = "
#define FMM_MAX_NEWTON_STEP_FIVE                  "Numerical_differences: The max newton step has been taken 5 times, see D&S p 348"
#define FMM_CONVERGENCE_CHECK                     "Numerical_differences: Convergence check value = "
#define FMM_CONVERGENCE_THRESHOLD                 "Numerical_differences: Convergence tolerance   = "
#define FMM_CONVERGENCE                           "Numerical_differences: Convergence = "
#define FMM_FUNCTION_SCORE                        "Numerical_differences: Function score = "
#define FMM_GRADIENT_VALUE                        "Numerical_differences: Gradient value = "
#define FMM_SMALL_STEP_SIZE_CONVERGENCE           "Numerical_differences: Step size too small. Indicates successful convergence, but this is not a textbook ideal convergence"
#define FMM_CONVERGENCE_NOT_TEXTBOOK              "Numerical_differences: "

//**********************************************************************
// GAMMADIFF
//
//**********************************************************************
#define GAMMADIFF_SIZE_LOWER_BOUND_START_VALUE    "Lower bound vector is not same size as start value"
#define GAMMADIFF_SIZE_UPPER_BOUND_START_VALUE    "Upper bound vector is not same size as start value"
#define GAMMADIFF_CONVERGENCE_UNCLEAR             "Unclear convergence, maybe local minimum"
#define GAMMADIFF_EVALUATIONS_MAX                 "Maximum evaluations/iterations with no convergence"
#define GAMMADIFF_CONVERGENCE                     "Convergence was successful"
#define GAMMADIFF_CONVERGENCE_SUCCESSFUL          "Convergence was successful"
#define GAMMADIFF_RETURN_VALUE_UNKNOWN            "Fatal error, unknown return value = "
#define GAMMADIFF_LESS_START_LOWER_BOUND          "Start value is less than lower bound"
#define GAMMADIFF_GREATER_START_UPPER_BOUND       "Start value is greater than upper bound"

//**********************************************************************
// DESOLVER
//
//**********************************************************************
#define DESOLVER_CURRENT_GENERATION               "DE_Solver: Current generation = "
#define DESOLVERCONVERGENCE_CHECK                 "DE_Solver: Convergence check value = "
#define DESOLVERCONVERGENCE_THRESHOLD             "DE_Solver: Convergence tolerance = "
#define DESOLVERCONVERGENCE                       "DE_Solver: Convergence = "

//**********************************************************************
// PARAMETERS
//
//**********************************************************************
#define PARAM_A                                   "a"
#define PARAM_A50                                 "a50"
#define PARAM_ABUNDANCE                           "abundance"
#define PARAM_ABUNDANCE_DENSITY                   "abundance_density"
#define PARAM_ACTIVE                              "active"
#define PARAM_ADAPT_STEPSIZE_AT                   "adapt_stepsize_at"
#define PARAM_ADDITIONAL_PRIOR                    "additional_prior"
#define PARAM_ADDITIVE                            "additive"
#define PARAM_ADDITIVE_NORMAL                     "additive_normal"
#define PARAM_ADJACENT_CELL_MOVEMENT              "adjacent_cell"
#define PARAM_ADMB                                "admb"
#define PARAM_ADOLC                               "adolc"
#define PARAM_AGE                                 "age"
#define PARAM_AGES                                "ages"
#define PARAM_AGE_INDEX                           "age_index"
#define PARAM_AGE_LENGTH                          "age_length"
#define PARAM_AGE_LENGTHS                         "age_lengths"
#define PARAM_AGE_LENGTH_KEY                      "age_length_key"
#define PARAM_AGE_LENGTH_KEYS                     "age_length_keys"
#define PARAM_AGE_PLUS                            "age_plus"
#define PARAM_AGE_WEIGHT                          "age_weight"
#define PARAM_AGEING                              "ageing"
#define PARAM_AGEING_LABEL                        "ageing_label"
#define PARAM_AGEING_ERROR                        "ageing_error"
#define PARAM_AGEING_ERRORS                       "ageing_errors"
#define PARAM_ALL_VALUES_BOUNDED                  "all_values_bounded"
#define PARAM_ALL_VALUES                          "all_values"
#define PARAM_ALPHA                               "alpha"
#define PARAM_ANNUAL_MORTALITY_RATE               "annual_mortality_rate"
#define PARAM_ANNUAL_SHIFT                        "annual_shift"
#define PARAM_AREA                                "area"
#define PARAM_ASSERT                              "assert"
#define PARAM_ATO95                               "ato95"
#define PARAM_AVERAGE                             "average"
#define PARAM_B                                   "b"
#define PARAM_B0                                  "b0"
#define PARAM_B0_VALUE                            "b0_value"
#define PARAM_BASIC                               "basic"
#define PARAM_BETA                                "beta"
#define PARAM_BETADIFF                            "betadiff"
#define PARAM_BEVERTON_HOLT                       "beverton_holt"
#define PARAM_BH_RECRUITMENT                      "bh_recruitment"
#define PARAM_BINOMIAL                            "binomial"
#define PARAM_BINOMIAL_APPROX                     "binomial_approx"
#define PARAM_BIOMASS                             "biomass"
#define PARAM_BIOMASS_DENSITY                     "biomass_density"
#define PARAM_BIOMASS_EVENT_MORTALITY             "biomass_event_mortality"
#define PARAM_BY_LENGTH                           "by_length"
#define PARAM_C                                   "c"
#define PARAM_CASAL_PENALTY                       "casal_penalty"
#define PARAM_CATCHABILITY                        "catchability"
#define PARAM_CATCHES                             "catches"
#define PARAM_CATEGORICAL                         "categorical"
#define PARAM_CATEGORICAL_MONOTONIC               "monotonic_categorical"
#define PARAM_CATEGORIES                          "categories"
#define PARAM_CATEGORY                            "category"
#define PARAM_CATEGORY_INDEX                      "category_index"
#define PARAM_CATEGORY_INFO                       "category_info"
#define PARAM_CATEGORY_LIST                       "category_list"
#define PARAM_CATEGORY_TRANSITION                 "category_transition"
#define PARAM_CATEGORY_TRANSITION_RATE            "category_transition_rate"
#define PARAM_CATEGORY_VALUES                     "category_values"
#define PARAM_CATEGORY_LABELS                     "category_labels"
#define PARAM_CELL_LENGTH                         "cell_length"
#define PARAM_CLASS_MINIMUMS                      "class_minimums"
#define PARAM_COLUMN                              "column"
#define PARAM_COLUMN_INDEX                        "column_index"
#define PARAM_CONFIG_FILE                         "config_file"
#define PARAM_CONSTANT                            "constant"
#define PARAM_CONSTANT_LOSS_RATE                  "constant_loss_rate"
#define PARAM_CONSTANT_RATE                       "constant_rate"
#define PARAM_CONSTANT_RECRUITMENT                "constant_recruitment"
#define PARAM_CONSUMPTION_RATE                    "consumption_rate"
#define PARAM_CORRELATION                         "correlation"
#define PARAM_CORRELATION_ADJUSTMENT_DIFF         "correlation_adjustment_diff"
#define PARAM_COVARIANCE_ADJUSTMENT_METHOD        "covariance_adjustment_method"
#define PARAM_COVARIANCE                          "covariance"
#define PARAM_COVARIANCE_MATRIX                   "covariance_matrix"
#define PARAM_CONVERGENCE_YEARS                   "convergence_years"
#define PARAM_CPPAD                               "cppad"
#define PARAM_CROSSOVER_PROBABILITY               "crossover_probability"
#define PARAM_CURRENT_YEAR                        "current_year"
#define PARAM_CV                                  "cv"
#define PARAM_CV_FIRST                            "cv_first"
#define PARAM_CV_LAST                             "cv_last"
#define PARAM_D                                   "d"
#define PARAM_DATA                                "data"
#define PARAM_DATA_WEIGHT_TYPE                    "data_weight_type"
#define PARAM_DATA_WEIGHT_VALUE                   "data_weight_value"
#define PARAM_DE_SOLVER                           "de_solver"
#define PARAM_DEBUG                               "debug"
#define PARAM_DELTA                               "delta"
#define PARAM_DERIVED                             "derived"
#define PARAM_DERIVED_QUANTITIES                  "derived_quantities"
#define PARAM_DERIVED_QUANTITY                    "derived_quantity"
#define PARAM_DETECTION_PARAMETER                 "detection"
#define PARAM_DF                                  "df"
#define PARAM_DIFFERENCE                          "difference"
#define PARAM_DIFFERENCE_SCALE                    "difference_scale"
#define PARAM_DISPERSION                          "dispersion"
#define PARAM_DISTANCE                            "distance"
#define PARAM_DISTRIBUTION                        "distribution"
#define PARAM_DIRICHLET					            		  "dirichlet"
#define PARAM_DLIB                                "dlib"
#define PARAM_DOUBLE                              "numeric"
#define PARAM_DOUBLE_EXPONENTIAL                  "double_exponential"
#define PARAM_DOUBLE_NORMAL                       "double_normal"
#define PARAM_E                                   "e"
#define PARAM_ELECTIVITIES                        "electivities"
#define PARAM_ENABLED_ESTIMATES                   "enabled_estimates"
#define PARAM_END_TABLE                           "end_table"
#define PARAM_ERROR_VALUE                         "error_value"
#define PARAM_ERROR_VALUES                        "error_values"
#define PARAM_ERROR_VALUE_MULTIPLIER              "error_value_multiplier"
#define PARAM_ESTIMABLE                           "estimable"
#define PARAM_ESTIMABLE_VALUE_FILE                "estimable_value_file"
#define PARAM_ESTIMATE                            "estimate"
#define PARAM_ESTIMATE_SUMMARY                    "estimate_summary"
#define PARAM_ESTIMATE_TRANSFORMATION             "estimate_transformation"
#define PARAM_ESTIMATES                           "estimates"
#define PARAM_ESTIMATE_VALUE                      "estimate_value"
#define PARAM_ESTIMATION                          "estimation"
#define PARAM_ESTIMATION_PHASE                    "estimation_phase"
#define PARAM_EVENT                               "event"
#define PARAM_EVENT_MORTALITY                     "event_mortality"
#define PARAM_EXCLUDE_PROCESSES                   "exclude_processes"
#define PARAM_EXPECTED_VALUE                      "expected_value"
#define PARAM_EXPONENTIAL                         "exponential"
#define PARAM_EXOGENOUS_VARIABLE                  "exogeneous_variable"
#define PARAM_EXOGENOUS                           "exogeneous"
#define PARAM_EXTERNAL_GAPS                       "external_gaps"
#define PARAM_FADBAD                              "fadbad"
#define PARAM_FILE_NAME                           "file_name"
#define PARAM_FINAL_YEAR                          "final_year"
#define PARAM_FINE                                "fine"
#define PARAM_FINEST                              "finest"
#define PARAM_FISHERY                             "fishery"
#define PARAM_FISHERIES                           "fisheries"
#define PARAM_FLAGGED_PENALTIES                   "flagged_penalties"
#define PARAM_FORCE_ESTIMABLE_VALUES_FILE         "force_estimable_values_file"
#define PARAM_FORMAT                              "format"
#define PARAM_FRANCIS                             "francis"
#define PARAM_FREE                                "free"
#define PARAM_FROM                                "from"
#define PARAM_FUNCTION                            "function"
#define PARAM_GAMMADIFF                           "numerical_differences"
#define PARAM_GRAMS                               "grams"
#define PARAM_GROWTH                              "growth"
#define PARAM_GROWTH_BASED                        "growth_based"
#define PARAM_GROWTH_PROPORTIONS                  "growth_proportions"
#define PARAM_H                                   "h"
#define PARAM_HEADER                              "header"
#define PARAM_HEIGHT                              "height"
#define PARAM_HOKI_PRIOR                          "hoki_prior"
#define PARAM_HYBRID                              "hybrid"
#define PARAM_INCREASING                          "increasing"
#define PARAM_INDEPENDENCE_METROPOLIS             "independence_metropolis"
#define PARAM_INDEX                               "index"
#define PARAM_INITIAL_MORTALITY                   "initial_mortality"
#define PARAM_INITIAL_MORTALITY_SELECTIVITY       "initial_mortality_selectivity"
#define PARAM_INITIAL_YEAR                        "initial_year"
#define PARAM_INITIALISATION                      "initialisation"
#define PARAM_INITIALISATION_TIME_STEPS           "initialisation_time_steps"
#define PARAM_INITIALISATION_PARTITION            "initialisation_partition"
#define PARAM_INITIALISATION_PHASE                "initialisation_phase"
#define PARAM_INITIALISATION_PHASES               "initialisation_phases"
#define PARAM_INSERT_PROCESSES                    "insert_processes"
#define PARAM_MORTALITY_INSTANTANEOUS             "mortality_instantaneous"
#define PARAM_MORTALITY_HOLLING_RATE              "mortality_holling_rate"
#define PARAM_INTERNAL_GAPS                       "internal_gaps"
#define PARAM_INTERPOLATE                         "interpolate"
#define PARAM_INVERSE                             "inverse"
#define PARAM_INVERSE_LOGISTIC                    "inverse_logistic"
#define PARAM_ITERATIVE                           "iterative"
#define PARAM_K                                   "k"
#define PARAM_KGS                                 "kgs"
#define PARAM_KEEP                                "keep"
#define PARAM_KNIFE_EDGE                          "knife_edge"
#define PARAM_L                                   "l"
#define PARAM_LABEL                               "label"
#define PARAM_LAMBDA                              "lambda"
#define PARAM_LAYER                               "layer"
#define PARAM_LAYER_DERIVED_WORLD_VIEW            "layer_derived_view"
#define PARAM_LAYER_HEIGHT                        "layer_height"
#define PARAM_LAYER_WIDTH                         "layer_width"
#define PARAM_LAYERS                              "layers"
#define PARAM_LENGTH                              "length"
#define PARAM_LENGTH_BINS                         "length_bins"
#define PARAM_LENGTH_PLUS                         "length_plus_group"
#define PARAM_LENGTH_WEIGHT                       "length_weight"
#define PARAM_LENGTH_WEIGHTS                      "length_weights"
#define PARAM_LIKELIHOOD                          "likelihood"
#define PARAM_LIKELIHOOD_MULTIPLIER               "likelihood_multiplier"
#define PARAM_LINF                                "linf"
#define PARAM_LOCAL_BH_RECRUITMENT                "local_bh_recruitment"
#define PARAM_LOG                                 "log"
#define PARAM_LOG_LEVEL                           "log_level"
#define PARAM_LOG_SCALE                           "log_scale"
#define PARAM_LOGISTIC                            "logistic"
#define PARAM_LOGISTIC_PRODUCING                  "logistic_producing"
#define PARAM_LOGNORMAL                           "lognormal"
#define PARAM_LOGNORMAL_WITH_Q                    "lognormal_with_q"
#define PARAM_LOSS_RATE                           "loss_rate"
#define PARAM_LOSS_RATE_SELECTIVITIES             "loss_rate_selectivities"
#define PARAM_LOWER_BOUND                         "lower_bound"
#define PARAM_M                                   "m"
#define PARAM_MATURATION                          "maturation"
#define PARAM_MATURATION_RATE                     "maturation_rate"
#define PARAM_MAX_AGE                             "max_age"
#define PARAM_MAX_CORRELATION                     "max_correlation"
#define PARAM_MAX_EVALUATIONS                     "evaluations"
#define PARAM_MAX_GENERATIONS                     "max_generations"
#define PARAM_MAX_ITERATIONS                      "iterations"
#define PARAM_MAX_LENGTH                          "maximum_length"
#define PARAM_MCMC                                "mcmc"
#define PARAM_MCMC_CHAIN                          "mcmc_chain"
#define PARAM_MCMC_COVARIANCE                     "mcmc_covariance"
#define PARAM_MCMC_FIXED                          "mcmc_fixed"
#define PARAM_MEAN                                "mean"
#define PARAM_MEDIUM                              "medium"
#define PARAM_META                                "meta"
#define PARAM_METHOD                              "method"
#define PARAM_METROPOLIS_HASTINGS                 "metropolis_hastings"
#define PARAM_MIGRATION_MOVEMENT                  "migration"
#define PARAM_MIN_AGE                             "min_age"
#define PARAM_MINIMIZER                           "minimiser"
#define PARAM_MODEL                               "model"
#define PARAM_MORTALITY                           "mortality"
#define PARAM_MORTALITY_CONSTANT_RATE             "mortality_constant_rate"
#define PARAM_MORTALITY_EVENT                     "mortality_event"
#define PARAM_MORTALITY_EVENT_BIOMASS             "mortality_event_biomass"
#define PARAM_MU                                  "mu"
#define PARAM_MULTINOMIAL                         "multinomial"
#define PARAM_MULTIPLICATIVE                      "multiplicative"
#define PARAM_MULTIPLIER                          "multiplier"
#define PARAM_N                                   "n"
#define PARAM_NAMES                               "names"
#define PARAM_NCOLS                               "ncols"
#define PARAM_NEAREST_NEIGHBOUR                   "nearest_neighbour"
#define PARAM_NONE                                "none"
#define PARAM_NOP                                 "nop"
#define PARAM_NORMAL                              "normal"
#define PARAM_NORMAL_BY_STDEV                     "normal_by_stdev"
#define PARAM_NORMAL_LOG                          "normal_log"
#define PARAM_NO_STANDARD_HEADER_REPORT           "no_standard_header_report"
#define PARAM_NUMBERS                             "numbers"
#define PARAM_NROWS                               "nrows"
#define PARAM_OBJECTIVE                           "objective"
#define PARAM_OBJECTIVE_FUNCTION                  "objective_function"
#define PARAM_OBS                                 "obs"
#define PARAM_OBSERVATION                         "observation"
#define PARAM_OFF_BY_ONE                          "off_by_one"
#define PARAM_ONE                                 "1 (one)"
#define PARAM_ONE_THOUSAND                        "1000"
#define PARAM_OVERWRITE                           "overwrite"
#define PARAM_P1                                  "p1"
#define PARAM_P2                                  "p2"
#define PARAM_PARAMETER                           "parameter"
#define PARAM_PARTITION                           "partition"
#define PARAM_PARTITION_BIOMASS                   "partition_biomass"
#define PARAM_PARTITION_MEAN_WEIGHT               "partition_mean_weight"
#define PARAM_PENALTY                             "penalty"
#define PARAM_PLUS_GROUP                          "plus_group"
#define PARAM_POPULATION_SIZE                     "population_size"
#define PARAM_PREY_CATEGORIES                     "prey_categories"
#define PARAM_PREDATOR_CATEGORIES                 "predator_categories"
#define PARAM_PREY_SELECTIVITIES                  "prey_selectivities"
#define PARAM_PREDATOR_SELECTIVITIES              "predator_selectivities"
#define PARAM_PREFERENCE_MOVEMENT                 "preference"
#define PARAM_PREFERENCE_FUNCTION                 "preference_function"
#define PARAM_PREFERENCE_FUNCTIONS                "preference_functions"
#define PARAM_PRINT_REPORT                        "print_report"
#define PARAM_PRIOR                               "prior"
#define PARAM_PRIOR_YCS_VALUES                    "prior_standardised_ycs"
#define PARAM_PROCESS                             "process"
#define PARAM_PROCESS_ERROR                       "process_error"
#define PARAM_PROCESS_ERRORS                      "process_errors"
#define PARAM_PROCESS_ERROR_TYPE                  "process_error_type"
#define PARAM_PROCESS_PROPORTION                  "process_proportion"
#define PARAM_PROCESSES                           "processes"
#define PARAM_PROFILE                             "profile"
#define PARAM_PROFILES                            "profiles"
#define PARAM_PROJECT                             "project"
#define PARAM_PROJECTS                            "projects"
#define PARAM_PROCESS_ABUNDANCE                   "process_abundance"
#define PARAM_PROCESS_BIOMASS                     "process_biomass"
#define PARAM_PROCESS_PROPORTIONS_AT_AGE          "process_proportions_at_age"
#define PARAM_PROCESS_PROPORTIONS_AT_AGE_FOR_FISHERY "process_proportions_at_age_for_fishery"
#define PARAM_PROCESS_PROPORTIONS_AT_LENGTH       "process_proportions_at_length"
#define PARAM_PROCESS_PROPORTIONS_AT_LENGTH_FOR_FISHERY "process_proportions_at_length_for_fishery"
#define PARAM_PROCESS_PROPORTIONS_BY_CATEGORY     "process_proportions_by_category"
#define PARAM_PROCESS_PROPORTIONS_MIGRATING       "process_proportions_migrating"
#define PARAM_PROJECTION_FINAL_YEAR               "projection_final_year"
#define PARAM_PROPORTION                          "proportion"
#define PARAM_PROPORTIONS                         "proportions"
#define PARAM_PROPORTIONS_AT_AGE                  "proportions_at_age"
#define PARAM_PROPORTIONS_AT_LENGTH               "proportions_at_length"
#define PARAM_PROPORTIONS_BY_CATEGORY             "proportions_by_category"
#define PARAM_PROPORTION_TIME_STEP                "proportion_time-step"
#define PARAM_PROPOSAL_DISTRIBUTION               "proposal_distribution"
#define PARAM_PSEUDO                              "none"
#define PARAM_Q                                   "q"
#define PARAM_R                                   "r"
#define PARAM_RECAPTURED                          "recaptured"
#define PARAM_R0                                  "r0"
#define PARAM_R0_LAYER                            "r0_layer"
#define PARAM_RATE                                "rate"
#define PARAM_RATES                               "rates"
#define PARAM_RATIO                               "ratio"
#define PARAM_RECRUITMENT                         "recruitment"
#define PARAM_RECRUITMENT_TIME                    "recruitment_time"
#define PARAM_RECRUITMENT_BEVERTON_HOLT           "recruitment_beverton_holt"
#define PARAM_RECRUITMENT_CONSTANT                "recruitment_constant"
#define PARAM_RECRUITMENT_LABEL                   "recruitment_label"
#define PARAM_RECRUITMENT_VALUES                  "recruitment_values"
#define PARAM_RANDOM_NUMBER_SEED                  "random_number_seed"
#define PARAM_REPORT                              "report"
#define PARAM_RESCALE                             "rescale"
#define PARAM_RHO                                 "rho"
#define PARAM_ROW                                 "row"
#define PARAM_ROW_INDEX                           "row_index"
#define PARAM_RUN_LENGTH                          "run_length"
#define PARAM_RUN_MODE                            "run_mode"
#define PARAM_SAME                                "same"
#define PARAM_SAMPLE                              "sample"
#define PARAM_SCALING_YEARS                       "scaling_years"
#define PARAM_SCANNED                             "scanned"
#define PARAM_SCORES_INDEX                        "scores_index"
#define PARAM_SCHNUTE                             "schnute"
#define PARAM_SECTION                             "command"
#define PARAM_SELECTIVITIES                       "selectivities"
#define PARAM_SELECTIVITY                         "selectivity"
#define PARAM_SEQUENTIALLY_ADD                    "sequentially_add"
#define PARAM_SKIP_CONFIG_FILE                    "skip_config_file"
#define PARAM_SHIFT_A                             "shift_parameter"
#define PARAM_SIGMA                               "sigma"
#define PARAM_SIGMA_L                             "sigma_l"
#define PARAM_SIGMA_R                             "sigma_r"
#define PARAM_SIMULATED_OBSERVATION               "simulated_observation"
#define PARAM_SIMULATION_LIKELIHOOD               "simulation_likelihood"
#define PARAM_SINK_LAYER                          "sink_layer"
#define PARAM_SIZES                               "sizes"
#define PARAM_SOURCE_LAYER                        "source_layer"
#define PARAM_SPATIAL_MAP                         "spatial_map"
#define PARAM_SSB_LAYER                           "ssb_layer"
#define PARAM_SSB_VALUES                          "ssb_values"
#define PARAM_STANDARDISE_YCS_YEARS               "standardise_ycs_years"
#define PARAM_START                               "start"
#define PARAM_START_YEAR                          "start_year"
#define PARAM_STATE                               "state"
#define PARAM_SQUARE_ROOT                         "sqrt"
#define PARAM_SQUARE_UNIFORM                      "square_uniform"
#define PARAM_SSB                                 "ssb"
#define PARAM_SSB_OFFSET                          "ssb_offset"
#define PARAM_STATE_CATEGORY_BY_AGE               "state_category_by_age"
#define PARAM_STEP_SIZE                           "step_size"
#define PARAM_STEPS                               "steps"
#define PARAM_STEEPNESS                           "steepness"
#define PARAM_STRING                              "categorical"
#define PARAM_T                                   "t"
#define PARAM_T0                                  "t0"
#define PARAM_TABLE                               "table"
#define PARAM_TAG                                 "tag"
#define PARAM_TAG_BY_AGE                          "tag_by_age"
#define PARAM_TAG_BY_LENGTH                       "tag_by_length"
#define PARAM_TAG_LOSS_RATE                       "tag_loss_rate"
#define PARAM_TAG_LOSS_YEARS                      "tag_loss_years"
#define PARAM_TAG_RECAPTURE_BY_AGE                "tag_recapture_by_age"
#define PARAM_TAG_RECAPTURE_BY_LENGTH             "tag_recapture_by_length"
#define PARAM_TAU1                                "tau1"
#define PARAM_TAU2                                "tau2"
#define PARAM_TARGET_CATEGORIES                   "categories2"
#define PARAM_TARGET_SELECTIVITIES                "selectivities2"
#define PARAM_THRESHOLD                           "threshold"
#define PARAM_THRESHOLD_BIOMASS                   "threshold_biomass"
#define PARAM_TIME_STEP                           "time_step"
#define PARAM_TIME_STEP_PROPORTION                "time_step_proportion"
#define PARAM_TIME_STEP_PROPORTIONS               "time_step_proportions"
#define PARAM_TIME_STEP_PROPORTION_METHOD         "time_step_proportion_method"
#define PARAM_TIME_STEP_RATIO                     "time_step_ratio"
#define PARAM_TIME_STEPS                          "time_steps"
#define PARAM_TIME_VARYING                        "time_varying"
#define PARAM_TO                                  "to"
#define PARAM_TOLERANCE                           "tolerance"
#define PARAM_TONNES                              "tonnes"
#define PARAM_TOTAL_SCORE                         "total_score"
#define PARAM_TOTAL                               "total"
#define PARAM_TRACE                               "trace"
#define PARAM_TRANSFORMATION                      "transformation"
#define PARAM_TRANSITION                          "transition"
#define PARAM_TRANSITION_CATEGORY                 "transition_category"
#define PARAM_TRANSITION_CATEGORY_BY_AGE          "transition_category_by_age"
#define PARAM_TRUE_YCS_VALUES                     "true_ycs_values"
#define PARAM_TYPE                                "type"
#define PARAM_U_MAX                               "u_max"
#define PARAM_UOBS_F                              "Fishing_pressure"
#define PARAM_UNITS                               "units"
#define PARAM_UNIFORM                             "uniform"
#define PARAM_UNIFORM_LOG                         "uniform_log"
#define PARAM_UPPER_BOUND                         "upper_bound"
#define PARAM_V                                   "v"
#define PARAM_VECTOR_AVERAGE                      "vector_average"
#define PARAM_VECTOR_SMOOTHING                    "vector_smoothing"
#define PARAM_VON_BERTALANFFY                     "von_bertalanffy"
#define PARAM_VALUE                               "value"
#define PARAM_VALUES                              "values"
#define PARAM_WIDTH                               "width"
#define PARAM_WEIGHTS                             "weights"
#define PARAM_WEIGHTED_PRODUCT                    "weighted_product"
#define PARAM_WEIGHTED_SUM                        "weighted_sum"
#define PARAM_X0                                  "x0"
#define PARAM_X                                   "x"
#define PARAM_X1                                  "x1"
#define PARAM_X2                                  "x2"
#define PARAM_Y0                                  "y0"
#define PARAM_Y1                                  "y1"
#define PARAM_Y2                                  "y2"
#define PARAM_YCS_VALUES                          "ycs_values"
#define PARAM_YCS_YEARS                           "ycs_years"
#define PARAM_YEAR                                "year"
#define PARAM_YEARS                               "years"
#define PARAM_ZERO                                "0 (zero)"

#endif /* ENGLISH_H_ */
