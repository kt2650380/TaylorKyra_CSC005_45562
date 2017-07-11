/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* Function for practice program 1 Chapter 4, liters to gallons*/

static_cast<double>(drive_too)(short liters_par, short miles_par)

{
 
    
    const long per_gal = 0.264179;
    long convert, final;
    
    convert = liters_par * per_gal;
    final = convert / miles_par;
    
    return (final);
           
    
}