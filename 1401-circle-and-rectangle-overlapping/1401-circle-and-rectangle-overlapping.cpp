class Solution {
public:
    bool solve(int circleRadius, int circleX, int circleY, int rectX1, int rectY1, int rectX2, int rectY2) {
    auto isInsideCircle = [&](int x, int y) {
        return (x - circleX) * (x - circleX) + (y - circleY) * (y - circleY) <= circleRadius * circleRadius;
    };

    if (rectX1 <= circleX && circleX <= rectX2 && rectY1 <= circleY && circleY <= rectY2)
        return true;

    for (auto x = rectX1; x <= rectX2; ++x) {
        if (isInsideCircle(x, rectY1) || isInsideCircle(x, rectY2))
            return true;
    }

    for (auto y = rectY1; y <= rectY2; ++y) {
        if (isInsideCircle(rectX1, y) || isInsideCircle(rectX2, y))
            return true;
    }

    return false;
}

    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        return solve(radius, xCenter, yCenter, x1, y1, x2, y2);
    }
};