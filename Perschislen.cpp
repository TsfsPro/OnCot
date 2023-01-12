#include <iostream>
#include <string>
//Определяем перечесления монстров
enum class Morder{
	GOBLIN,
	OGRE,
	SKELETON,
	ORCK,
	TROLL,
};
//Структура представления нашего монстра.
struct myHeroes {
	Morder monstertype;
	std::string name;
	int health;
};
//Возвращаем тип монстра в виде строки
std::string getMonster(myHeroes monstr) {
	if (monstr.monstertype == Morder::GOBLIN)
		return "Goblin";
	if (monstr.monstertype == Morder::OGRE)
		return "Ogre";
	if (monstr.monstertype == Morder::SKELETON)
		return "Skeleton";
	if (monstr.monstertype == Morder::ORCK)
		return "Orck";
	if (monstr.monstertype == Morder::TROLL)
		return "Troll";
	return "Unknown";
}
void printMonster(myHeroes monstr) {
	std::cout << "Это " << getMonster(monstr) << std::endl;
	std::cout << " его имя " << monstr.name << ". Он имеет здоровья " << monstr.health << " юнитов." << std::endl;
}
int main() {
	setlocale(LC_ALL, "Russian");
	myHeroes goblin = { Morder::GOBLIN, "John", 170 };
	myHeroes orck = { Morder::ORCK, "Sam", 120 };
	printMonster(goblin);
	printMonster(orck);
	return 0;
}