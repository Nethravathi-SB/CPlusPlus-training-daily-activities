#pragma once

#include <iostream>
using namespace std;
class Time
{
	int hh, mm, ss;
public:
	Time():hh(0),mm(0),ss(0){}
	int get_hh();
	int get_mm();
	int get_ss();
	void convert_time();
	void accept_time();
	void show_time();
};