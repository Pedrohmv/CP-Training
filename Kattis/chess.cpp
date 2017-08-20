#include <iostream>

using namespace std;

inline
void use_io_optimizations(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

struct Position{
	int row;
	char column;

	Position intersect(Position other){
        Position intersection;

        intersection.row    = (other.row + other.column + row - column) / 2;
        intersection.column = (other.row + other.column - row + column) / 2;

        return intersection.valid() ? intersection : other.intersect(*this);
    }

	bool color(){
		return (row + column) % 2;
	}

	bool same_diagonal(Position other){
        return (row + column == other.row + other.column || row + other.column == other.row + column);
    }

private:
	bool valid(){
		return (row>=1 && row<=8 && column>='A' && column<='H')? true : false;
	}
};

bool operator==(const Position& left, const Position& right){
    return left.row == right.row && left.column == right.column;
}

istream& operator>>(istream& in, Position& position){
    return cin >> position.column >> position.row;
}

ostream& operator<<(ostream& out, const Position& position){
    return out << position.column << ' ' << position.row;
}

int main()
{
    use_io_optimizations();

    unsigned int test_cases;
    cin >> test_cases;

    for (unsigned int test {0}; test < test_cases; ++test)
    {
        Position origin;
        Position target;

        cin >> origin >> target;

        if (origin.color() != target.color())
        {
            cout << "Impossible\n";
        }
        else if (origin == target)
        {
            cout << 0 << ' ' << origin << '\n';
        }
        else if (origin.same_diagonal(target))
        {
            cout << 1 << ' ' << origin << ' ' << target << '\n';
        }
        else
        {
            cout << 2                        << ' '
                 << origin                   << ' '
                 << origin.intersect(target) << ' '
                 << target                   << '\n';
        }
    }

    return 0;
}