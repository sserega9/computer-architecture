struct Table
{
private:
    float length;
    float width;

	bool isFlipped = false;

public:
    float x;
    float y;

    Table(float x, float y, float length, float width);

    void flipTheTable();

    void placeTheTable(float x, float y);
};
