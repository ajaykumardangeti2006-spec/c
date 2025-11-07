#include<iosStream>
using namespace std;
class sample 
{
		static int x;
		public:
			static void show()
			{
				cout<<"x"<<x;
			}
};
int sample::x=90;
int main()
{
sample::show();
}
