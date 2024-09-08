################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Chapter15Project.cpp \
../src/Dairy.cpp \
../src/Date.cpp \
../src/Food.cpp \
../src/Fruit.cpp \
../src/Vegetable.cpp 

CPP_DEPS += \
./src/Chapter15Project.d \
./src/Dairy.d \
./src/Date.d \
./src/Food.d \
./src/Fruit.d \
./src/Vegetable.d 

OBJS += \
./src/Chapter15Project.o \
./src/Dairy.o \
./src/Date.o \
./src/Food.o \
./src/Fruit.o \
./src/Vegetable.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Chapter15Project.d ./src/Chapter15Project.o ./src/Dairy.d ./src/Dairy.o ./src/Date.d ./src/Date.o ./src/Food.d ./src/Food.o ./src/Fruit.d ./src/Fruit.o ./src/Vegetable.d ./src/Vegetable.o

.PHONY: clean-src

