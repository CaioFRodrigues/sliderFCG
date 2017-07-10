#include "rectangle.cpp"

class Map
{
    private:
        int dimension_x;
        int dimension_y;
        int rectangle_width;
        int rectangle_height;
        Rectangle rectangles[this.dimension_x][this.dimension_y]
        void initializeMap();
    public:
        Map(int dimension_x, int dimension_y, int rectangle_width, int rectangle_height){
            this.dimension_x = dimension_x;
            this.dimension_y = dimension_y;
            this.rectangle_width = rectangle_width;
            this.rectangle_height = rectangle_height;
        }
}

int Map::getDimension_X(){
    return this.dimension_x;
}

int Map::getDimension_Y(){
    return this.dimension_y;
}

int Map::getRectangle_width(){
    return this.rectangle_width;
}

int Map::getDimension_height(){
    return this.dimension_x;
}

void Map::initializeMap(){
    float position_x = 0.0f;
    float position_y = 0.0f;
    for(int i = 0; i < this.dimension_x; i++){
        for(int j = 0; j < this.dimension_y; j++){
            this.rectangles[i][j] = new Rectangle(position_x, position_y, 2, 2, );
        }
    }
}



