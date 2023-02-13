TARGET_SOURCES(ARCH_LIB PRIVATE
    src/StaticBranchPredictModel.cpp
    src/DynamicBranchPredictModel.cpp
)

TARGET_INCLUDE_DIRECTORIES(ARCH_LIB PRIVATE
    include
)
