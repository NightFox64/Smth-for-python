class Point:

    def __init__(self, x, y):
        self.x = x
        self.y = y

    def move(self, dx, dy):
        self.x += dx
        self.y += dy

    def length(self, point):
        return f"{((point.x - self.x) ** 2 + (point.y - self.y) ** 2) ** 0.5:.2f}"
