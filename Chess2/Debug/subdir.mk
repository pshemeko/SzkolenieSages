################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../bishop.cpp \
../board.cpp \
../king.cpp \
../knight.cpp \
../main.cpp \
../pawn.cpp \
../piece.cpp \
../queen.cpp \
../rook.cpp 

OBJS += \
./bishop.o \
./board.o \
./king.o \
./knight.o \
./main.o \
./pawn.o \
./piece.o \
./queen.o \
./rook.o 

CPP_DEPS += \
./bishop.d \
./board.d \
./king.d \
./knight.d \
./main.d \
./pawn.d \
./piece.d \
./queen.d \
./rook.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++17 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


