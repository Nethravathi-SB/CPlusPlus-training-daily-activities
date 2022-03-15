#include <iostream>
#include "NetPay.h"

using namespace std;
int main()
{
	netpay* net = new netpay();
	net->calculate_netpay();
}