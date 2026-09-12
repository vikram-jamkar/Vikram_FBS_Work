package com.phonex.demo;

public interface PayFess {
public void payOnline();

public default void payoffline() {
	System.out.println("this class not be capable to offline fees");
	
	this.payOnline();
}

}
