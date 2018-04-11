default: main.cpp inputValidation.cpp ThinkingRoom.cpp Space.cpp PigletsRoom.cpp LivingRoom.cpp Library.cpp HoneyRoom.cpp Game.cpp Bedroom.cpp
	g++ -std=c++0x main.cpp inputValidation.cpp ThinkingRoom.cpp Space.cpp PigletsRoom.cpp LivingRoom.cpp Library.cpp HoneyRoom.cpp Game.cpp Bedroom.cpp -o d

clean: 
	rm d
	

