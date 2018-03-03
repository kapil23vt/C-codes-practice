#include <iostream>
#include <string>

std::string PrintBinary(float);
int main()
{
  std::cout<<PrintBinary(0.72)<<std::endl;
}

std::string PrintBinary(float num)
{
	if(num>=1||num<0)
	{
		return "ERROR";
	}
	if(num==0)
	{
		return 0;
	}

	std::string result = "0.";
	int count=0;
	while(num!=0)
	{
		count++;
		num=num*2;
		if(num>=1)
		{
			result=result+"1";
			num-=1;
		}
		else
		{
			result=result+"0";
		}
		if(count>32)
		{
			return "ERROR";
		}
	}
	return result;
}
