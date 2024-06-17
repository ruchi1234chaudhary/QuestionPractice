class Solution {
public:
    struct Point {
        int x, y;
    };

    // Function to check the orientation of the ordered triplet (p, q, r)
    int orientation(Point p, Point q, Point r) {
        long long val = (long long)(q.y - p.y) * (r.x - q.x) - (long long)(q.x - p.x) * (r.y - q.y);
        if (val == 0) return 0;  // collinear
        return (val > 0) ? 1 : 2; // clock or counterclock wise
    }

    // Function to check if a point q lies on segment pr
    bool onSegment(Point p, Point q, Point r) {
        if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
            q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
            return true;
        return false;
    }

    // Function to check if the two line segments intersect
    bool doIntersect(Point p1, Point q1, Point p2, Point q2) {
        // Find the four orientations needed for general and special cases
        int o1 = orientation(p1, q1, p2);
        int o2 = orientation(p1, q1, q2);
        int o3 = orientation(p2, q2, p1);
        int o4 = orientation(p2, q2, q1);

        // General case
        if (o1 != o2 && o3 != o4)
            return true;

        // Special Cases
        // p1, q1 and p2 are collinear and p2 lies on segment p1q1
        if (o1 == 0 && onSegment(p1, p2, q1)) return true;

        // p1, q1 and q2 are collinear and q2 lies on segment p1q1
        if (o2 == 0 && onSegment(p1, q2, q1)) return true;

        // p2, q2 and p1 are collinear and p1 lies on segment p2q2
        if (o3 == 0 && onSegment(p2, p1, q2)) return true;

        // p2, q2 and q1 are collinear and q1 lies on segment p2q2
        if (o4 == 0 && onSegment(p2, q1, q2)) return true;

        // Otherwise, the segments do not intersect
        return false;
    }

    string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
        Point P1 = {p1[0], p1[1]};
        Point Q1 = {q1[0], q1[1]};
        Point P2 = {p2[0], p2[1]};
        Point Q2 = {q2[0], q2[1]};

        return doIntersect(P1, Q1, P2, Q2) ? "true" : "false";
    }
};

