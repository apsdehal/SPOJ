#include <iostream>
	using namespace std;




	int main()
	{
		int rev(int);

	int n,m,k;
	cin>> k;
	while(k--){
	cin >> n>>m;
	int j= rev(rev(n)+rev(m));
	cout<< j<<endl;
	}

	return 0;
	}
	int rev(int n)
		{while(n%10==0){n=n/10;}
		int r=0;
		while(n>0)
		{
		r=r*10+(n%10);
		n/=10;
		}
				return r;
			}
