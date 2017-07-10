class Rectangle
{
    private:
        float positionX;
        float positionY;
        int width;
        int height;
        ObjModel model;
    public:
        Rectangle(float positionX, float positionY, int width, int height, ObjModel model){
            this.positionX = positionX;
            this.positionY = positionY;
            this.width = width;
            this.height = height;
            this.model = model;
        }
        float getPositionX();
        float getPositionY();
        int getWidth();
        int getHeight();
        ObjModel getModel();
        bool collide(Rectangle rectangle);
        bool isInside(float positionX, float positionY);
};

float Rectangle::getPositionX(){
    return this.positionX;
}

float Rectangle::getPositionY(){
    return this.positionY;
}

int Rectangle::getWidth(){
    return this.width;
}

int Rectangle::getHeight(){
    return this.height;
}

ObjModel Rectangle::getModel(){
  return this.model;
}

bool Rectangle::collide(Rectangle rectangleTwo){
    float rectangleTwo_posX = rectangleTwo.getPositionX();
    float rectangleTwo_posY = rectangleTwo.getPositionY();
    float rectangleTwo_width = rectangleTwo.getWidth();
    float rectangleTwo_height = rectangleTwo.getHeight();
    float position1_X = (rectangleTwo_posX + 1);
    float position1_Y = (rectangleTwo_posY + 1);
    float position2_X = (rectangleTwo_posX + rectangleTwo_width - 1);
    float position2_Y = (rectangleTwo_posY + 1);
    float position3_X = (rectangleTwo_posX + rectangleTwo_width - 1);
    float position3_Y = (rectangleTwo_posY + rectangleTwo_height - 1);
    float position4_X = (rectangleTwo_posX + 1);
    float position4_Y = (rectangleTwo_posY + rectangleTwo_height - 1);

    if this.isInside(position1_X, position1_Y) or this.isInside(position2_X, position2_Y) or this.isInside(position3_X, position3_Y) or this.isInside(position4_X, position4_Y):
        return true
    return false
}

bool Rectangle::isInside(positionX, positionY){
    if this.positionX <= positionX < this.positionX + this.width
            if this.positionY <= positionY < this.positionY + this.height:
                return true
        return false
}
