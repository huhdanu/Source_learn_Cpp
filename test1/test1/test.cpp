#include <iostream>
#include <string>
#include <time.h>
//#include "SinhVien.h"
#include "ChaMe.h"
#include "ConCai.h"

using namespace std;


int cong(int x, int y)
{
	int tong = x + y;
	return tong;
}

class LopHocLapTrinh {
public:		//chung
	void LopHocLapTrinhCpp() {
		cout << "chao mung den voi lop hoc lap trinh C++" << endl;
	}

};

class LopHocLapTrinhCpp {
	// ham dung trong OOP
public: 
	LopHocLapTrinhCpp() {
	cout << "ham dung - contructor" << endl;
}
public:
	LopHocLapTrinhCpp(string classname) {
		TenLopHoc = classname;
	}
public:		//chung
	void setName(string tenGi) {
		TenLopHoc = tenGi;
	}
	
	string getName() {
		return TenLopHoc;
	}
private:	//rieng
	string TenLopHoc;
};

// ---------------- OVERRIDE -------------------------
class TraiChuoi {
public:
	void LotVo();				//overload
	void LotVo(int soQua);		//overload
		
	void KichThuoc() {
		cout << "Trai chuoi nay TO\n";
	}
	virtual void ViCuaChuoi() {
		cout << "Ngon\n";
	}
};

class TraiChuoiNho :public TraiChuoi {
public:
	void KichThuoc() {
		cout << "Trai chuoi nay be xiu\n";		//override
	}
	void ViCuaChuoi() {
		cout << "Van con NON lam, cha't qua' troi cha't";
	}

};
//------ class sinhVien ----------------
/*class sinhVien {
public: 
	sinhVien() {
		mssv_ = 0;
		name_ = "";
}
public:
	int mssv_;		//m_variable  _variable  variable_
	string name_;
	sinhVien* next_;
};*/

//truyen mang 1 chieu vao ham
void inMang1Chieu(int *mang1chieu, int num) {
	for (int i = 0; i < num; i++) {
		cout << "phan tu thu " << i << " la " << mang1chieu[i] << endl;
	}
}

//truyen mang 2 chieu vao ham
void inMang2Chieu(int mang2chieu[][2],int row, int col) {
	for (row = 0; row < 3; row++) {
		cout << "hang " << row + 1 << ": ";
		for (col = 0; col < 2; col++) {
			cout << mang2chieu[row][col] << ' ';
		}
		cout << endl;
	}
}

//tim so lon nhat trong mang
void fineLargestNumber(int *mang1Chieu, int num) {
	int largestNumber = mang1Chieu[0];
	for (int i = 0; i < num; i++) {
		if (mang1Chieu[i] > largestNumber) {
			largestNumber = mang1Chieu[i];
		}
	}
	cout << "So lon nhat trong mang ngau nhien tren la: " << largestNumber << endl;
}

//use SWITCH instead of using IF for many situate condition, remember using "BREAK" for each case
void translateThang2English(int thang) {
	switch (thang){
	case 1:
		cout << "Thang " << thang << " trong Tieng Anh la January" << endl; break;
	case 2:
		cout << "Thang " << thang << " trong Tieng Anh la Febuary" << endl; break;
	case 3:
		cout << "Thang " << thang << " trong Tieng Anh la March" << endl; break;
	case 4:
		cout << "Thang " << thang << " trong Tieng Anh la April" << endl; break;
	case 5:
		cout << "Thang " << thang << " trong Tieng Anh la May" << endl; break;
	case 6:
		cout << "Thang " << thang << " trong Tieng Anh la June" << endl; break;
	case 7:
		cout << "Thang " << thang << " trong Tieng Anh la July" << endl; break;
	case 8:
		cout << "Thang " << thang << " trong Tieng Anh la August" << endl; break;
	case 9:
		cout << "Thang " << thang << " trong Tieng Anh la Septemper" << endl; break;
	case 10:
		cout << "Thang " << thang << " trong Tieng Anh la October" << endl; break;
	case 11:
		cout << "Thang " << thang << " trong Tieng Anh la November" << endl; break;
	case 12:
		cout << "Thang " << thang << " trong Tieng Anh la December" << endl; break;

	default:
		cout << "Thang nay khong ton tai." <<  endl;
	}
}

//use swap tranh trung voi std co 'swap'
void swapNumber(int *number1, int *number2 ) {
	int tmp = *number1;
	*number1 = *number2;
	*number2 = tmp;
}

//--- SWAP by using reference--------------
void swapNumberUsingReference(int & number1, int & number2) {
	int tmp = number1;
	number1 = number2;
	number2 = tmp;
}

//-------- DA HINH ----------------------------------
struct PhongTom {
	 virtual void SkillCoBan() {
		cout << "Dam: 1 dam la chet luon\n";
	}

};
struct CungThu :public PhongTom{
	void SkillCoBan() {
		cout << "Cung: Tram phat tram trung\n";
	}
};

struct GayThu :public PhongTom{
	void SkillCoBan() {
		cout<<"Gay: Xem 1 gay cua ta day\n";
	}

};

//ENUM: return number of position object, start 0 or value be assign,--> next_Obj = pre_Obj + 1; -----------------
enum  AnSang {
	Opla = 5,
	BanhMi,
	Pho,
	Xoi,
};

//enum Linh {
//	MIN_LINH = 30,
//	MAX_LINH = 100,
//};

//u can use define behind instead of ENUM
#define MAX_LINH 100
#define MIN_LINH 30

enum Item {
	KIEM,
	CUNG,
	DAO,
	KEO,

};

struct SNode {
	int Data;
	SNode * pNext;
};

struct SList {
	SNode* pHead;
	SNode* pTail;

	SList() {};
	SList(SNode* Head, SNode* Tail) {
		this->pHead = Head;
		this->pTail = Tail;
	}
};

int main()
{
	// endl: su dung de xuong hang nhu \n

	/*std::cout << "Hi Hanoi, Im Rose" << endl;
	cout << "hello world !" << endl;
	std::cout << "Hi Hanoi, Im Rose";*/

	/*int a = 35;
	int b = 54;
	int tong = a + b;

	cout << "tong cua a va b la " << tong;*/

	//int d, m, y;
	//cout << "Nhap ngay thang nam sinh cua ban: ";
	//cin >> d >> m >> y;
	//cout << "ban sinh ngay: "
	//	<< d << '-'
	//	<< m << '-'
	//	<< y << endl;

	//string name, anw;
	//cout << "Nhap ten m vao day di: ";
	//cin >> name;
	//cout << "Ten may la " << name << " phai khong?" << endl;
	////tra loi cau noi
	//cout << "hay tra loi cau hoi tren: " << endl;
	//cin >> anw;
	//if (anw == "no")
	//	cout << "Thi ke cai con me may, ok?";
	//else cout << "OK, the tot roi!";


//-----------------------------------------------------------------
	// lay toan bo du lieu console dua vao bien use getline()
	//string name;
	//cout << "nhap ho ten m vao day di: ";
	////cin >> name;
	//getline(cin, name);
	//cout << "ho ten day du cua m la " << name << endl;

	//--------------------------------------------------------------------------
//use fflush(stdin) hoac cin.ignore(1) de xoa dau enter buffer khi lay tu console
	/*int tuoi;
	cout << "nhap tuoi cua ban: ";
	cin >> tuoi;
	cout << "nam nay ban " << tuoi << " tuoi" << endl;

	
	string name;
	cout << "nhap ho ten m vao day di: ";
	//cin >> name;

	//fflush(stdin);		//xoa enter
	cin.ignore(1);			//xoa 1 ky tu

	getline(cin, name);
	cout << "ho ten day du cua m la " << name << endl;*/
//---------------------------7-----------------------------------------
	/*bool freefire = true;
	if (freefire)
	{
		cout << "Lua dang chay\nSong dai thanh huyen thoai" << endl<<endl;
		cout << "aligato kudemaisha" << endl;
	}*/
//------su dung ham con return ----------------------------------------
		/*int x, y;
		cout << "nhap so x: ";
		cin >> x;
		cout << "nhap so y: ";
		cin >> y;
		cout << "tong 2 so x va y la: " << cong(x, y) << endl;*/

//-------- su dung CLASS: huong doi tuong in Cpp (OOP) ------------------------------
	/*LopHocLapTrinh LopHoc;			//gan LopHoc cho class lhltcpp
	LopHoc.LopHocLapTrinhCpp();
	  
	LopHocLapTrinhCpp LopHoc1;
	LopHocLapTrinhCpp LopHoc2("Embedded Systems");
	cout << "Lop ban dang hoc la " << LopHoc2.getName() << endl;
	LopHoc1.setName("Lop hoc Vi xu ban thay Binh");
	cout << LopHoc1.getName() << endl;*/

//------------ POINTER --------------------------------------------------
	/*int banhmi=1, xoiman=2, pho=3 ;
	cout << xoiman << ' ' << &xoiman << endl;
	cout << banhmi << ' ' << &banhmi << endl;
	cout << pho << ' ' << &pho << endl;
	
	int* thucdon = 0;
	thucdon = &banhmi;
	cout << "dia chi bien banhmi la: " << thucdon << endl;*/
	
	////---- *var: to get value of address which been point ------
	//cout << "gia tri cua banh mi la " << *thucdon << " tai dia chi: " << thucdon << endl;  
	//	
	////chang value through pointer
	//*thucdon = 10;
	//cout << "gia tri cua banhmi hien tai la: " << *thucdon << endl;
	
//------------------- FOR ------------------------------
	/*for (int dem = 0; dem < 6; dem++)
	{
		for (int dem1 = 0; dem1 < dem; dem1++)
		{
			cout << '#';
		}
		cout << endl;
	}*/

//-------------- MANG ---------------------------------
	/*int diemthi[5] = { 7,6,8,9,10 };
	cout << "Danh sach diem thi nhu sau:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << diemthi[i] << endl;
	}*/

//------------- MANG POINTER ---------------------------------------
	/*int mang1chieu[3] = {1,5,8};
	int* controInt = 0;*/
	//controInt = &mang1chieu[0];	//controInt = mang1chieu;
	//
	//cout << mang1chieu[0] << ' ' << &mang1chieu[0] << endl;
	//cout << *controInt << ' ' << controInt << endl;
	
	//inMang1Chieu(mang1chieu, 3);
	//pointer type INT 4bytes, type CHAR 1byte

//-------------- MANG 2 CHIEU -------------------------------------
	/*int mang2Chieu[3][2] = { {2,5},
							 {9,1},
							 {8,7} };

	for (int row = 0; row < 3;row++) {
		cout << "hang " << row + 1 <<": ";
		for (int col = 0; col < 2; col++) {
			cout << mang2Chieu[row][col] << ' ';
		}
		cout << endl;
	}

	cout << "--------------" << endl;
	inMang2Chieu(mang2Chieu, 3, 2);*/

//--- RANDOM NUMBER: use rand() and fine largest number in random array-----------------
	/*srand(time(0));
	int mangNgauNhien[10];
	cout << "mang ngau nhien nhu sau: ";
	for (int i = 0; i < 10; i++) {
		mangNgauNhien[i] = rand()%255;
		cout <<  mangNgauNhien[i]<< ' ';
	}
	cout << endl << endl;
	fineLargestNumber(mangNgauNhien, 10);*/

	/*int thang;
	cout << "Hay nhap 1 thang bat ky: thang ";
	cin >> thang;
	
	translateThang2English(thang);*/

//--------- using INT MAIN() instead of using VOID MAIN() ----------------
	
// ----------------------- CAP PHAT DONG ------------------------------
// -----	new , delete, delete[]		--------------------------
//	int soPhanTu;
//	cout << "Nhap so phan tu ban muon: ";
//	cin >> soPhanTu;
//
//// int mangCapPhatDong [soPhanTu] -> compiler yeu cau cap 1 vung nho co dinh khi khoi tao nen khai bao nhu nay 'was impossible'
//
//	int* mangCapPhatDong = new int[soPhanTu];
//
//	for (int i = 0; i < soPhanTu; i++) {
//		mangCapPhatDong[i] = i;
//		cout << mangCapPhatDong[i] << "  ";
//	}
//// sau khi dung bo nho Cap Phat Dong co the xoa di de khong tieu ton tai nguyen
//	delete[] mangCapPhatDong;


//----------------- SWAP USE POINTER -----------------------------
	/*int soThuNhat = 2, soThuHai = 17;
	cout << "truoc khi swap: " << soThuNhat << ' ' << soThuHai << endl;
	
	swapNumber(&soThuNhat, &soThuHai);
	cout << "sau khi swap: " << soThuNhat << ' ' << soThuHai << endl;*/

//---------------- REFERENCE: THAM CHIEU ---------------------------
	//int firstNumber = 15;
	//int & changeNumber = firstNumber;		// its call reference, gan giong voi POINTER

	//changeNumber = 20;
	//cout << "so dau tien sau khi thay doi khi dung THAM CHIEU la: " << firstNumber << endl;

	//int* changePtr = &firstNumber;
	//*changePtr = 2019;

	//cout << "so dau tien sau khi thay doi khi dung CON TRO la: " << firstNumber << endl;
	
//------------------ SWAP by using REFERENCE -------------------------
	/*int number1 = 15, number2 = 9;
	cout << "2 so " << number1 << " va " << number2;
	swapNumberUsingReference(number1,number2);
	cout << " sau khi swap la: " << number1 << ' ' << number2 << endl;*/

//---------------- su dung danh sach lien ket LINK LIST -------------------
	/*sinhVien  sinhVienThuNhat;
	sinhVien  sinhVienThuHai;
	sinhVien  sinhVienThuBa;

	sinhVienThuNhat.mssv_ = 20161298;
	sinhVienThuNhat.name_ = "Nguyen Huu Danh";
	sinhVienThuNhat.next_ = &sinhVienThuHai;

	sinhVienThuHai.mssv_ = 20161353;
	sinhVienThuHai.name_ = "Le Ki Ma";
	sinhVienThuHai.next_ = &sinhVienThuBa;

	sinhVienThuBa.mssv_ = 22195373;
	sinhVienThuBa.name_ = "Dao Thi Hong";
	sinhVienThuBa.next_ = NULL;*/
//-------------- Ke thua in Cpp ---------------------------------
	/*ChaMe chame;
	chame.XinChao();

	ConCai con;
	con.XinChao();*/

//---------------- Da hinh -----------------------------------
	/*CungThu cung;
	GayThu gay;
	cung.SkillCoBan();
	gay.SkillCoBan();
	
	CungThu ct;
	GayThu gt;

	PhongTom phongtom;
	phongtom.SkillCoBan();

	PhongTom* ptr1 = new CungThu; //cap phat dong con tro kieu PhongTom theo bien CungThu
	ptr1->SkillCoBan();

	ptr1 = &ct;
	ptr1->SkillCoBan();

	PhongTom* ptr2 = new GayThu;
	ptr2->SkillCoBan();

	ptr2 = &gt;
	ptr2->SkillCoBan();

	string a = "toi la superman";
	string* pointer;
	pointer = &a;
	cout << *pointer;*/

// ---------- overload - override ------------------------
	/*TraiChuoi traichuoi;
	traichuoi.KichThuoc();

	TraiChuoiNho quaSo1;
	quaSo1.KichThuoc();

	TraiChuoi* ptr1= new TraiChuoi;
	ptr1->ViCuaChuoi();

	ptr1 = new TraiChuoiNho();
	ptr1->ViCuaChuoi();*/
//------------------ su dung con tro bang "THIS" ----------------
	//this->m_ 

//------- ENUM ---------------
	//cout << BanhMi;

	/*int soLinh;
	cout << "Nhap so Linh nhap ngu: ";
	cin >> soLinh;
	if ((soLinh < MIN_LINH) || (soLinh > MAX_LINH)) {
		cout << "So Linh sai quy dinh !";
	}
	else {
		cout << "Tien hanh nhap ngu.";
	}*/

	// use ENUM for a list to return another value 
	/*Item item = KIEM;
	switch (item) {
	case(KIEM):
		cout << "Kiem: dung de chem";
		break;
	case(CUNG):
		cout << "Cung: dung de ban";
		break;
	case(DAO):
		cout << "Dao: dung de dam";
		break;
	case(KEO):
		cout << "Keo: dung de cat";
		break;
	}*/

	SNode snode;
	snode.Data = 1;
	snode.pNext = NULL;
	
	SNode snode1;
	snode1.Data = 2;
	snode1.pNext = NULL;
	
	SList slist = SList(&snode,&snode1);
	cout <<"Thong tin node 1:\n"<< "Data: " << slist.pHead->Data << endl;
	cout << "Thong tin node 2:\n" << "Data: " << slist.pTail->Data;
	
	return 0;
} 

