/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: lampv
 *
 * Created on February 14, 2017, 9:59 AM
 */

#include "greeting_en.h"
#include "greeting_vi.h"
#include "greeting_jp.h"

/*
 * 
 */


int main(int argc, char** argv) {
   	greeting_en();
	greeting_vi();
	greeting_jp();	
    
    return (0);
}

