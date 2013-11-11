#ifndef POSITION
#define POSITION

class Position
{
public:
    //==============================================================================
    Position(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Position()
	{
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

    double getX()
	{
		return this->x;
	}

	void setX(double x)
	{
		this->x = x;
	}

	double getY()
	{
		return this->y;
	}

	void setY(double y)
	{
		this->y = y;
	}

	double getZ()
	{
		return this->z;
	}

	void setZ(double z)
	{
		this->z = z;
	}

private:
    //==============================================================================
	double x;
	double y;
	double z;
	
};

#endif  // POSITION