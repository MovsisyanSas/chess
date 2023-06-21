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

class king : public figure {
protected:
	int MaxDistance = 1;
	std::string Kname = "King";
public:
	
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells" << std::endl;
	}
	void color() override{
		std::cout << "Color: undefined" << std::endl;
	}

	void name() override {
		std::cout << "Figure name: " << Kname << std::endl;
	}
};

class Wking : public king {
	std::string Color;
public:
	Wking() {
		Color = "white";
	}
	void move() override {
		std::cout << "can move by " << king::MaxDistance << " cells" << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << king::Kname << std::endl;
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
class Bking : public king {
	std::string Color;
public:
	Bking() {
		Color = "black";
	}
	void move() override {
		std::cout << "can move by " << king::MaxDistance << " cells" << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << king::Kname << std::endl;
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

class queen : public figure {
protected:
	int MaxDistance = 8;
	std::string Qname = "queen";
	std::string movestyle = "by diagonal/horizontal/vertical ways";
public:

	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Color: undefined" << std::endl;
	}

	void name() override {
		std::cout << "Figure name: " << Qname << std::endl;
	}
};
class Wqueen : public queen {
	std::string Color;
public:
	Wqueen() {
		Color = "white";
	}
	void move() override {
		std::cout << "can move by " << queen::MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << queen::Qname << std::endl;
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
class Bqueen : public queen {
	std::string Color;
public:
	Bqueen() {
		Color = "black";
	}
	void move() override {
		std::cout << "can move by " << queen::MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << queen::Qname << std::endl;
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

class bishop : public figure {
protected:
	int MaxDistance = 8;
	std::string Bname = "bishop";
	std::string movestyle = "by diagonal way";
public:

	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Color: undefined" << std::endl;
	}

	void name() override {
		std::cout << "Figure name: " << Bname << std::endl;
	}
};
class Wbishop : public bishop {
	std::string Color;
	int AvailableQuantity;
public:
	Wbishop() {
		Color = "white";
		AvailableQuantity = 2;
	}
	void move() override {
		std::cout << "can move by " << bishop::MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << bishop::Bname << std::endl;
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
class Bbishop : public bishop {
	std::string Color;
	int AvailableQuantity;
public:
	Bbishop() {
		Color = "black";
		AvailableQuantity = 2;
	}
	void move() override {
		std::cout << "can move by " << bishop::MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << bishop::Bname << std::endl;
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

class horse : public figure {
protected:
	int MaxDistance = std::pow(0.5,5); //square root of 2^2+1^1 cause it goes 2 cells to one way and 1 cell vertically 
	std::string Hname = "horse";
	std::string movestyle = "by 2 cells to one way of four cardinal directions and 1 cell vertically to last one";
public:

	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Color: undefined" << std::endl;
	}

	void name() override {
		std::cout << "Figure name: " << Hname << std::endl;
	}
};
class Whorse : public horse {
	std::string Color;
	int AvailableQuantity;
public:
	Whorse() {
		Color = "white";
		AvailableQuantity = 2;
	}
	void move() override {
		std::cout << "can move by " << horse::MaxDistance << " cells" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << horse::Hname << std::endl;
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
class Bhorse : public horse {
	std::string Color;
	int AvailableQuantity;
public:
	Bhorse() {
		Color = "black";
		AvailableQuantity = 2;
	}
	void move() override {
		std::cout << "can move by " << horse::MaxDistance << " cells" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << horse::Hname << std::endl;
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

class rook : public figure {
protected:
	int MaxDistance = 8; 
	std::string Rname = "rook";
	std::string movestyle = "by vertical/horizontal ways";
public:

	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}

	void color() override {
		std::cout << "Color: undefined" << std::endl;
	}

	void name() override {
		std::cout << "Figure name: " << Rname << std::endl;
	}
};
class Wrook : public rook {
	std::string Color;
	int AvailableQuantity;
public:
	Wrook() {
		Color = "white";
		AvailableQuantity = 2;
	}
	void move() override {
		std::cout << "can move by " << rook::MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << rook::Rname << std::endl;
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
class Brook : public rook {
	std::string Color;
	int AvailableQuantity;
public:
	Brook() {
		Color = "black";
		AvailableQuantity = 2;
	}
	void move() override {
		std::cout << "can move by " << rook::MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << rook::Rname << std::endl;
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

class paw : public figure {
protected:
	int MaxDistance = 2;
	std::string Pname = "paw";
	std::string movestyle = "ahead (or vertically ahead in some cases)";
public:

	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Color: undefined" << std::endl;
	}

	void name() override {
		std::cout << "Figure name: " << Pname << std::endl;
	}
};
class Wpaw : public paw {
	std::string Color;
	int AvailableQuantity;
public:
	Wpaw() {
		Color = "white";
		AvailableQuantity = 8;
	}
	void move() override {
		std::cout << "can move by " << paw::MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << paw::Pname << std::endl;
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
class Bpaw : public paw {
	std::string Color;
	int AvailableQuantity;
public:
	Bpaw() {
		Color = "black";
		AvailableQuantity = 8;
	}
	void move() override {
		std::cout << "can move by " << paw::MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void name() override {
		std::cout << "Figure name: " << paw::Pname << std::endl;
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