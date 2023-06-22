#include <iostream>

//you will see a lot of virtual function that are not used because console will be so ugly, but if you want to use them just call them seperately
//for example:
//Wking obj;
//obj.move;
//obj.color;
//obj.name;
//so you will see statitics of each figure in chess(of course classes are done by half and even less)


class figure {
public:
	virtual void move() = 0;
	virtual void color() = 0;
	virtual void name() = 0;
};

class White :public figure {
protected:
	std::string Color = "white";
public:
	virtual void move() = 0;
	virtual void color() {
		std::cout << "Color: " << Color << std::endl;
	}
	virtual void name() = 0;
};


class Wking : public White {
private:
	int MaxDistance;
	std::string Kname;
public:
	Wking() {
		MaxDistance = 1;
		Kname = "King";
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells" << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << White::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Kname << std::endl;
	}
	Wking(const Wking& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Kname = obj.Kname;
	}
	Wking& operator = (const Wking& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Kname = obj.Kname;
		}
		return *this;
	}
};
class Wqueen : public White {
	int MaxDistance;
	std::string Qname;
	std::string movestyle;
public:
	Wqueen() {
		MaxDistance = 8;
		Qname = "queen";
		movestyle = "by diagonal/horizontal/vertical ways";
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << White::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Qname << std::endl;
	}
	Wqueen(const Wqueen& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Qname = obj.Qname;
		this->movestyle = obj.movestyle;
	}
	Wqueen& operator = (const Wqueen& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Qname = obj.Qname;
			this->movestyle = obj.movestyle;
		}
		return *this;
	}
};
class Wbishop : public White {
	int AvailableQuantity;
	int MaxDistance;
	std::string Bname;
	std::string movestyle;
public:
	Wbishop() {
		MaxDistance = 8;
		Bname = "bishop";
		movestyle = "by diagonal way";
		AvailableQuantity = 2;
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << White::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Bname << std::endl;
	}
	Wbishop(const Wbishop& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Bname = obj.Bname;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	Wbishop& operator = (const Wbishop& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Bname = obj.Bname;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
};
class Whorse : public White {
	int MaxDistance;
	std::string Hname;
	std::string movestyle;
	int AvailableQuantity;
public:
	Whorse() {
		MaxDistance = std::pow(0.5, 5); //square root of 2^2+1^1 cause it goes 2 cells to one way and 1 cell vertically 
		Hname = "horse";
		movestyle = "by 2 cells to one way of four cardinal directions and 1 cell vertically to last one";
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << White::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Hname << std::endl;
	}
	Whorse(const Whorse& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Hname = obj.Hname;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	Whorse& operator = (const Whorse& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Hname = obj.Hname;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
};
class Wrook : public White {
	int MaxDistance;
	std::string Rname;
	std::string movestyle;
	int AvailableQuantity;
public:
	Wrook() {
		MaxDistance = 8;
		Rname = "rook";
		movestyle = "by vertical/horizontal ways";
		AvailableQuantity = 2;
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << White::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Rname << std::endl;
	}
	Wrook(const Wrook& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Rname = obj.Rname;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	Wrook& operator = (const Wrook& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Rname = obj.Rname;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
};
class Wpaw : public White {
	int MaxDistance;
	std::string Pname;
	std::string movestyle;
	int AvailableQuantity;
public:
	Wpaw() {
		MaxDistance = 2;
		Pname = "paw";
		movestyle = "ahead (or vertically ahead in some cases)";
		AvailableQuantity = 8;
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << White::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Pname << std::endl;
	}
	Wpaw(const Wpaw& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Pname = obj.Pname;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	Wpaw& operator = (const Wpaw& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Pname = obj.Pname;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
};

class Black :public figure {
protected:
	std::string Color = "black";
public:
	virtual void move() = 0;
	virtual void color() {
		std::cout << "Color: " << Color << std::endl;
	}
	virtual void name() = 0;
};
class Bking : public Black {
private:
	int MaxDistance;
	std::string Kname;
public:
	Bking() {
		MaxDistance = 1;
		Kname = "King";
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells" << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Black::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Kname << std::endl;
	}
	Bking(const Bking& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Kname = obj.Kname;
	}
	Bking& operator = (const Bking& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Kname = obj.Kname;
		}
		return *this;
	}
};
class Bqueen : public Black {
	int MaxDistance;
	std::string Qname;
	std::string movestyle;
public:
	Bqueen() {
		MaxDistance = 8;
		Qname = "queen";
		movestyle = "by diagonal/horizontal/vertical ways";
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Black::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Qname << std::endl;
	}
	Bqueen(const Bqueen& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Qname = obj.Qname;
		this->movestyle = obj.movestyle;
	}
	Bqueen& operator = (const Bqueen& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Qname = obj.Qname;
			this->movestyle = obj.movestyle;
		}
		return *this;
	}
};
class Bbishop : public Black {
	int AvailableQuantity;
	int MaxDistance;
	std::string Bname;
	std::string movestyle;
public:
	Bbishop() {
		MaxDistance = 8;
		Bname = "bishop";
		movestyle = "by diagonal way";
		AvailableQuantity = 2;
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Black::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Bname << std::endl;
	}
	Bbishop(const Bbishop& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Bname = obj.Bname;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	Bbishop& operator = (const Bbishop& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Bname = obj.Bname;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
};
class Bhorse : public Black {
	int MaxDistance;
	std::string Hname;
	std::string movestyle;
	int AvailableQuantity;
public:
	Bhorse() {
		MaxDistance = std::pow(0.5, 5); //square root of 2^2+1^1 cause it goes 2 cells to one way and 1 cell vertically 
		Hname = "horse";
		movestyle = "by 2 cells to one way of four cardinal directions and 1 cell vertically to last one";
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Black::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Hname << std::endl;
	}
	Bhorse(const Bhorse& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Hname = obj.Hname;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	Bhorse& operator = (const Bhorse& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Hname = obj.Hname;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
};
class Brook : public Black {
	int MaxDistance;
	std::string Rname;
	std::string movestyle;
	int AvailableQuantity;
public:
	Brook() {
		MaxDistance = 8;
		Rname = "rook";
		movestyle = "by vertical/horizontal ways";
		AvailableQuantity = 2;
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Black::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Rname << std::endl;
	}
	Brook(const Brook& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Rname = obj.Rname;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	Brook& operator = (const Brook& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Rname = obj.Rname;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
};
class Bpaw : public Black {
	int MaxDistance;
	std::string Pname;
	std::string movestyle;
	int AvailableQuantity;
public:
	Bpaw() {
		MaxDistance = 2;
		Pname = "paw";
		movestyle = "ahead (or vertically ahead in some cases)";
		AvailableQuantity = 8;
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Black::Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << Pname << std::endl;
	}
	Bpaw(const Bpaw& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->Pname = obj.Pname;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	Bpaw& operator = (const Bpaw& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->Pname = obj.Pname;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
};

//just creation, i will use this class and enum later
//<------------------------------------------------------------------------------------------------------->
enum boardLetters {
	A = 1, B, C, D, E, F, G, H,
};

enum color {
	black, white,
};
class board {
	int row;
	int column;
	int** matrix;

	void init() {
		matrix = new int* [row];

		for (int i = 0; i < row; i++)
		{
			matrix[i] = new int[column];
		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				matrix[i][j] = black;
			}
		}
	}
	void colorSet() {
		for (int i = 0; i < row; i += 2)
		{
			for (int j = 1; j < column; j += 2)
			{
				matrix[i][j] = white;
			}
		}
		for (int i = 1; i < row; i += 2)
		{
			for (int j = 0; j < column; j += 2)
			{
				matrix[i][j] = white;
			}
		}
	}
public:
	board() {
		row = 8;
		column = H;
		init();
		colorSet();
	}
	void print() {
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				std::cout << matrix[i][j] << ' ';
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}

	board(const board& obj) {
		this->row = obj.row;
		this->column = obj.column;
		this->matrix = new int* [row];

		for (int i = 0; i < row; i++) {
			matrix[i] = new int[column];
		}

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				matrix[i][j] = obj.matrix[i][j];
			}
		}
	}
	board& operator = (const board& obj) {
		if (this != &obj)
		{
			this->row = obj.row;
			this->column = obj.column;
			this->matrix = new int* [row];

			for (int i = 0; i < row; i++) {
				matrix[i] = new int[column];
			}

			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					matrix[i][j] = obj.matrix[i][j];
				}
			}
		}
		return *this;
	}

	~board() {
		for (int i = 0; i < row; i++)
		{
			delete[] matrix[i];
		}
		delete[] matrix;

		std::cout << "Board deleted" << std::endl;
	}
};
//<------------------------------------------------------------------------------------------------------->
void White() {
	Wking wking;
	Wqueen wqueen;
	Wbishop wbishop1;
	Wbishop wbishop2;
	Whorse whorse1;
	Whorse whorse2;
	Wrook wrook1;
	Wrook wrook2;
}

void Black() {
	Bking bking;
	Bqueen bqueen;
	Bbishop bbishop1;
	Bbishop bbishop2;
	Bhorse bhorse1;
	Bhorse bhorse2;
	Brook brook1;
	Brook bsrook2;
}
void setup() {
	board Board;
	White();
	Black();
	Board.print();
}

int main() {
	setup();
}