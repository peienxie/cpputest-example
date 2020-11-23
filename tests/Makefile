#Set this to @ to keep the makefile quiet
export SILENCE = @

CPPUTEST_EXE_FLAGS = -v -c
CPPUTEST_USE_VPATH = Y

BUILD_DIR = build
CURRENT_DIR := $(dir $(abspath $(firstword $(MAKEFILE_LIST))))
PROJECT_DIR := $(abspath $(CURRENT_DIR)/..)
SRC_DIR := $(PROJECT_DIR)/src
TEST_DIR := $(CURRENT_DIR)

COMPONENT_NAME=ModuleA
SRC_FILES      = \
	$(SRC_DIR)/module_a/module_a.c \

TEST_SRC_FILES = \
	$(TEST_DIR)/src/testModuleA.cpp \
	$(TEST_DIR)/src/TestRunner.cpp \

INCLUDE_DIRS  = \
	$(SRC_DIR)/module_a \
	$(CPPUTEST_HOME)/include \

RESULT_DIR=$(BUILD_DIR)/$(COMPONENT_NAME)
TEST_TARGET=$(RESULT_DIR)/$(COMPONENT_NAME)_tests
CPPUTEST_OBJS_DIR=$(RESULT_DIR)/objs
CPPUTEST_LIB_DIR=$(RESULT_DIR)/lib

# run MakefileWorker.mk with the variables defined here
include $(CPPUTEST_HOME)/build/MakefileWorker.mk
