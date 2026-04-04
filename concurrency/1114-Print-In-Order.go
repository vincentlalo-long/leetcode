/*
Link : https://leetcode.com/problems/print-in-order/description/
*/

package main

type Foo struct {
	firstThread  chan struct{}
	secondThread chan struct{}
}

func NewFoo() *Foo {
	return &Foo{
		firstThread:  make(chan struct{}),
		secondThread: make(chan struct{}),
	}
}

func (f *Foo) First(printFirst func()) {
	// Do not change this line
	//fmt.Print("first")
	printFirst()
	f.firstThread <- struct{}{}
}

func (f *Foo) Second(printSecond func()) {
	/// Do not change this line
	<-f.firstThread
	//fmt.Print("second")
	printSecond()
	f.secondThread <- struct{}{}
}

func (f *Foo) Third(printThird func()) {
	// Do not change this line
	<-f.secondThread
	//fmt.Print("third")
	printThird()
}
