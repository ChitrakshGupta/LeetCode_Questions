class Solution
{
    public:
        int furthestBuilding(vector<int> &heights, int bricks, int ladders)
        {

            priority_queue<int> pq;
            int i = 0;
            for (i = 0; i < heights.size()-1; i++)
            {
                if (heights[i + 1] <= heights[i])
                {
                    continue;
                }
                int diff = heights[i + 1] - heights[i];

                if (diff <= bricks)
                {
                    bricks = bricks - diff;
                    pq.push(diff);
                }
                else if (ladders > 0)
                {

                    if (pq.size())
                    {
                        

                        int max_brick_until_use = pq.top();
                        if (max_brick_until_use > diff)
                        {
                            bricks=bricks+max_brick_until_use;
                            pq.pop();
                            pq.push(diff);
                            bricks = bricks - diff;
                        }
                    }

                    ladders--;	//used ladder insted of brick
                }
                else
                {
                    break;
                }
            }

            return i;
        }
};