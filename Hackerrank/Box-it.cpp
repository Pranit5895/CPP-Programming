#include<bits/stdc++.h>

using namespace std;

class Box{

private:
int l, b, h;
public:
Box(){
    this->l = 0;
    this->b = 0;
    this->h = 0;
}
Box(int x1, int x2, int x3){
    this->l = x1;
    this->b = x2;
    this->h = x3;
}
Box(Box &b){
    this->l = b.l;
    this->b = b.b;
    this->h = b.h;
}
int getLength(){ return l;}
int getBreadth(){ return b; }
int getHeight() { return h; }
long long CalculateVolume(){
    return (long long) l * b * h;
}
bool operator < (Box &b){
    if(this->l < b.l){
        return true;
    }
    else if(this->l == b.l && this->b < b.b){
        return true;
    }
    else if(this->h < b.h && this->l == b.l && this->b == b.b){
        return true;
    }
    return false;
}
friend ostream& operator <<(ostream& out, const Box& b){
    out << b.l << " " << b.b << " " << b.h;
    return out;
}
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
