#include "NyanCat.h"
#include <iostream>

using namespace std;

NyanCat::NyanCat(void)
{
	name="KJHSFDklHSDKLfhsasd789f6a89sdf76a897df69a87sd6f89a7s6df98a7s6df89a76sdf89a76sdf89a7s6d9f876asd89f76a98sd7f6a98s7d6f9a87sd6f98a7sd6f89a7sdf689asd6f98a76sd9f68dhfklajsdhflkjashdflhjasdflkhasldjfhalsd";
    dimensions=0;
    nyanCount=0;
    hasLazers=true;
    isRainbow=true;
    color = 0;
    nyanCount =0;
}


NyanCat::~NyanCat(void)
{
    nyanCount = 0;
    
    cout << name << " sdfalskdfhakfa8907sd6f89a7sd6f89a76sdf987a6sd9f786asd98f76a98sd7f6a89s7df69a87sdf689a7sd6fa89s7d6f89a7sdf69asdfasdfJDFHKLASJDHFKLAJSDHFLKJhdklfjhaskldfhlakjsdfhlKJDFHLKAJSDFHLAKJSDFHADFASDFASDFASDFASDF " << endl;
}

void NyanCat::fly()
{
    cout << name << " ASDFHSLDFHGALSDas76d5fa897s6df89a76sdf7asd9f786as9df6a98sd76f9a8s7df6a89sdf76a89df6a9sd76f9a8s7df69a8sdf69a8sd76fa89sd76fa98s7df69as78dfHGKLSERHGLKSJERGLSKJEGRKLSJGRLSJERGLSEJRG" << endl;
}

void NyanCat::nyan()
{
    cout << "ASDFJKHALGFALSDFALJSDFAJKLSDFKLJSDHFLfjlhaskldfhaklsdjfhaklsjdfklajsdfhq893475692387456234gf928374f68e7r6d5f87asd45f8as76d5f8a7s6d5f8a7sd65f8a7s6dfa87sd65fa78sd5f8a7sd65f8a7sd56fa78sdf" << endl;
    nyanCount++;
}
