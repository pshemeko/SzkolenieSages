################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Bishop.cpp \
../King.cpp \
../Knight.cpp \
../Pawn.cpp \
../Piece.cpp \
../Queen.cpp \
../Rook.cpp \
../board.cpp \
../main.cpp 

OBJS += \
./Bishop.o \
./King.o \
./Knight.o \
./Pawn.o \
./Piece.o \
./Queen.o \
./Rook.o \
./board.o \
./main.o 

CPP_DEPS += \
./Bishop.d \
./King.d \
./Knight.d \
./Pawn.d \
./Piece.d \
./Queen.d \
./Rook.d \
./board.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++17 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


