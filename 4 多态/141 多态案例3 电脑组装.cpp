#include <iostream>

using namespace std;

class AbsCPU
{
public:
	virtual void calculate() = 0;
};
class AbsVideoCard
{
public:
	virtual void display() = 0;
};
class AbsMemory
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(AbsCPU* c, AbsVideoCard* v, AbsMemory* m)
	{
		this->c = c;
		this->v = v;
		this->m = m;
	}

	void work()
	{
		this->c->calculate();
		this->v->display();
		this->m->storage();
	}

	virtual ~Computer()
	{
		if (this->c != NULL)
		{
			delete this->c;
			this->c = NULL;
		}
		if (this->v != NULL)
		{
			delete this->v;
			this->v = NULL;
		}
		if (this->m != NULL)
		{
			delete this->m;
			this->m = NULL;
		}
	}

private:
	AbsCPU* c;
	AbsVideoCard* v;
	AbsMemory* m;
};

class IntelCpu : public AbsCPU
{
	void calculate()
	{
		cout << "Intel CPU" << endl;
	}
};
class IntelVideoCard : public AbsVideoCard
{
	void display()
	{
		cout << "Intel videocard" << endl;
	}
};
class IntelMemory : public AbsMemory
{
	void storage()
	{
		cout << "Intel memory" << endl;
	}
};
class LenovoCpu : public AbsCPU
{
	void calculate()
	{
		cout << "Lenovo CPU" << endl;
	}
};
class LenovoVideoCard : public AbsVideoCard
{
	void display()
	{
		cout << "Lenovo videocard" << endl;
	}
};
class LenovoMemory : public AbsMemory
{
	void storage()
	{
		cout << "Lenovo memory" << endl;
	}
};

void test14101()
{
	//IntelCpu ic;
	//IntelVideoCard ivc;
	//IntelMemory im;
	//LenovoCpu lc;
	//LenovoVideoCard lvc;
	//LenovoMemory lm;
	//
	//Computer c1(&ic, &ivc, &im);
	//c1.work();
	//Computer c2(&lc, &ivc, &lm);
	//c2.work();

	AbsCPU* ic = new IntelCpu;
	AbsVideoCard* iv = new IntelVideoCard;
	AbsMemory* im = new IntelMemory;
	//Computer c1(ic, iv, im);
	//c1.work();
	Computer* c1 = new Computer(ic, iv, im);
	c1->work();
	delete c1;

}

int main(void)
{
	test14101();

	return 0;
}