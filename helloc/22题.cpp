#include <iostream>
#include "stdio.h"


class Transaction
{
public:
	Transaction()
	{

	};
	virtual ~Transaction()
	{

	};

	virtual void logTransaction() const = 0;


protected:
	void init()
	{

		logTransaction();
	};
};

class BuyTransaction : virtual public  Transaction
{
public:

	BuyTransaction()
	{
		init();
	};
	void logTransaction() const
	{
		printf("buyTransaction.logTransaction call\n");
	}
	virtual ~BuyTransaction()
	{

	}
};

class SellTransaction : virtual public Transaction
{
public:
	void logTransaction() const
	{
		printf("sellTransaction.logTransaction call\n");
	}

	virtual	~SellTransaction()
	{

	}
	SellTransaction() :Transaction()
	{
		init();
	}
};

void main()
{
	int a = 1;
	BuyTransaction *b = new BuyTransaction();
	std::cin >> a;
}