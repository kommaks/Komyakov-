#ifndef FIFO_H
#define FIFO_H 

class Lifo
{
private:
    int* queue;
    int length;

public:
	
	Lifo(int N);
	
	~Lifo();
	
	void push(int numb, int count);
	
	void check();
	
	void popLIFO();
	
};

#endif

#ifndef LIFO_H
#define LIFO_H 

class Fifo
{
private:
    int* queue;
    int length;

public:
	Fifo(int N);
	
	~Fifo();
	
	void push(int numb, int count);
	
	void check();
	
	void popFIFO();
};

#endif