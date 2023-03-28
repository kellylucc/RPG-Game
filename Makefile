game: main.cpp game.cpp end.cpp Character.o ChildhoodFriend.o Tsundere.o RichGuy.o Wallet.o shop.cpp
	g++ main.cpp game.cpp end.cpp Character.o ChildhoodFriend.o Tsundere.o RichGuy.o Wallet.o shop.cpp -o game

Character.o: Character.cpp Character.h
	g++ -c Character.cpp

ChildhoodFriend.o: ChildhoodFriend.cpp ChildhoodFriend.h
	g++ -c ChildhoodFriend.cpp

Tsundere.o: Tsundere.cpp Tsundere.h
	g++ -c Tsundere.cpp

RichGuy.o: RichGuy.cpp RichGuy.h
	g++ -c RichGuy.cpp

Wallet.o: Wallet.cpp Wallet.h
	g++ -c Wallet.cpp

clean:
	rm -f *.o project