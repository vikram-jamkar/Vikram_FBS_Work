package com.phonex.demo;

public class OfflineStudent implements PayFess {
	public OfflineStudent() {
		// TODO Auto-generated constructor stub
	}

	@Override
	public void payOnline() {
		System.out.println("Offline Student paying fess online");
		
	}

	@Override
	public void payoffline() {
		System.out.println("offline student paying fess offline fess");
		
	}

}
