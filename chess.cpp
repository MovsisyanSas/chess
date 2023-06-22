#include <iostream>

//you will see a lot of virtual function that are not used because console will be so ugly, but if you want to use them just call them seperately
//for example:
//Wking obj;
//obj.move;
//obj.color;
//obj.name;
//so you will see statitics of each figure in chess(of course classes are done by half and even less)


class figure {
protected:
	std::string white = "white";
	std::string black = "black";
public:
	virtual void move() = 0;
	virtual void color() = 0;
	virtual void Name() = 0;
	virtual ~figure() {}
};

class king : public figure {
private:
	int MaxDistance;
	std::string name;
	std::string Color;
public:
	king() {
		std::cout << "Error: enter color " << std::endl;
	}
	king(std::string Col) {
		if (Col == figure::white || Col == figure::black) {
			Color = Col;
			MaxDistance = 1;
			name = "king";
		}
		else {
			std::cout << "Error: enter color white or black " << std::endl;
		}
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells" << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void Name() override {
		std::cout << "Figure name: " << name << std::endl;
	}
	king(const king& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->name = obj.name;
	}
	king& operator = (const king& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->name = obj.name;
		}
		return *this;
	}
	~king() override {}
};
class queen : public figure {
	int MaxDistance;
	std::string name;
	std::string movestyle;
	std::string Color;
public:
	queen() {
		std::cout << "Error: enter color " << std::endl;
	}
	queen(std::string Col) {
		if (Col == figure::white || Col == figure::black)
		{
			Color = Col;
			MaxDistance = 8;
			name = "queen";
			movestyle = "by diagonal/horizontal/vertical ways";
		}
		else {
			std::cout << "Error: enter color white or black " << std::endl;
		}
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void Name() override {
		std::cout << "Figure name: " << name << std::endl;
	}
	queen(const queen& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->name = obj.name;
		this->movestyle = obj.movestyle;
	}
	queen& operator = (const queen& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->name = obj.name;
			this->movestyle = obj.movestyle;
		}
		return *this;
	}
	~queen() override {}
};
class bishop : public figure {
	int AvailableQuantity;
	int MaxDistance;
	std::string name;
	std::string movestyle;
	std::string Color;
public:
	bishop() {
		std::cout << "Error: enter color " << std::endl;
	}
	bishop(std::string Col) {
		if (Col == figure::white || Col == figure::black)
		{
			Color = Col;
			MaxDistance = 8;
			name = "bishop";
			movestyle = "by diagonal way";
			AvailableQuantity = 2;
		}
		else {
			std::cout << "Error: enter color white or black " << std::endl;
		}
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void Name() override {
		std::cout << "Figure name: " << name << std::endl;
	}
	bishop(const bishop& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->name = obj.name;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	bishop& operator = (const bishop& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->name = obj.name;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
	~bishop() override {}
};
class horse : public figure {
	int MaxDistance;
	std::string name;
	std::string movestyle;
	std::string Color;
	int AvailableQuantity;
public:
	horse() {
		std::cout << "Error: enter color " << std::endl;
	}
	horse(std::string Col) {
		if (Col == figure::white || Col == figure::black)
		{
			Color = Col;
			MaxDistance = std::pow(0.5, 5); //square root of 2^2+1^1 cause it goes 2 cells to one way and 1 cell vertically 
			name = "horse";
			movestyle = "by 2 cells to one way of four cardinal directions and 1 cell vertically to last one";
		}
		else {
			std::cout << "Error: enter color white or black " << std::endl;
		}
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void Name() override {
		std::cout << "Figure name: " << name << std::endl;
	}
	horse(const horse& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->name = obj.name;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	horse& operator = (const horse& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->name = obj.name;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
	~horse() override {}
};
class rook : public figure {
	int MaxDistance;
	std::string name;
	std::string movestyle;
	std::string Color;
	int AvailableQuantity;
public:
	rook() {
		std::cout << "Error: enter color " << std::endl;
	}
	rook(std::string Col) {
		if (Col == figure::white || Col == figure::black)
		{
			Color = Col;
			MaxDistance = 8;
			name = "rook";
			movestyle = "by vertical/horizontal ways";
			AvailableQuantity = 2;
		}
		else {
			std::cout << "Error: enter color white or black " << std::endl;
		}
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void Name() override {
		std::cout << "Figure name: " << name << std::endl;
	}
	rook(const rook& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->name = obj.name;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	rook& operator = (const rook& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->name = obj.name;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
	~rook() override {}
};
class paw : public figure {
	int MaxDistance;
	std::string name;
	std::string movestyle;
	std::string Color;
	int AvailableQuantity;
public:
	paw() {
		std::cout << "Error: enter color " << std::endl;
	}
	paw(std::string Col) {
		if (Col == figure::white || Col == figure::black)
		{
			Color = Col;
			MaxDistance = 2;
			name = "paw";
			movestyle = "ahead (or vertically ahead in some cases)";
			AvailableQuantity = 8;
		}
		else {
			std::cout << "Error: enter color white or black " << std::endl;
		}
	}
	void move() override {
		std::cout << "can move by " << MaxDistance << " cells(maximum)" << std::endl;
		std::cout << "Movestyle: " << movestyle << std::endl;
	}
	void color() override {
		std::cout << "Figure color: " << Color << std::endl;
	}
	void Name() override {
		std::cout << "Figure name: " << name << std::endl;
	}
	paw(const paw& obj) {
		this->Color = obj.Color;
		this->MaxDistance = obj.MaxDistance;
		this->name = obj.name;
		this->movestyle = obj.movestyle;
		this->AvailableQuantity = obj.AvailableQuantity;
	}
	paw& operator = (const paw& obj) {
		if (this != &obj)
		{
			this->Color = obj.Color;
			this->MaxDistance = obj.MaxDistance;
			this->name = obj.name;
			this->movestyle = obj.movestyle;
			this->AvailableQuantity = obj.AvailableQuantity;
		}
		return *this;
	}
	~paw() override {}
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
	king wk("white");
	queen wq("white");
	bishop wb1("white");
	bishop wb2("white");
	horse wh1("white");
	horse wh2("white");
	rook wr1("white");
	rook wr2("white");
	paw wp1("white");
	paw wp2("white");
	paw wp3("white");
	paw wp4("white");
	paw wp5("white");
	paw wp6("white");
	paw wp7("white");
	paw wp8("white");

}

void Black() {
	king bk("black");
	queen bq("black");
	bishop bb1("black");
	bishop bb2("black");
	horse bh1("black");
	horse bh2("black");
	rook br1("black");
	rook br2("black");
	paw bp1("black");
	paw bp2("black");
	paw bp3("black");
	paw bp4("black");
	paw bp5("black");
	paw bp6("black");
	paw bp7("black");
	paw bp8("black");
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