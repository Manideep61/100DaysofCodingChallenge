class Twitter {
private:
    int timestamp = 0;
    struct Tweet {
        int time;
        int tweetId;
        Tweet(int time, int tweetId) : time(time), tweetId(tweetId) {}
    };
    unordered_map<int , unordered_set<int>> followMap;
    unordered_map<int, vector<Tweet>> tweetsMap;
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweetsMap[userId].emplace_back(timestamp++, tweetId);
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;
        followMap[userId].insert(userId);
        for (int followeeId : followMap[userId]) {
            const auto& tws = tweetsMap[followeeId];
            for (int i = max(0, (int)tws.size() - 10); i < tws.size(); ++i) {
                minHeap.emplace(tws[i].time, tws[i].tweetId);
                if (minHeap.size() > 10) {
                    minHeap.pop();
                }
            }
        }
        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
    
    void follow(int followerId, int followeeId) {
        if (followerId != followeeId) {
            followMap[followerId].insert(followeeId);
        }
    }
    
    void unfollow(int followerId, int followeeId) {
        if (followerId != followeeId) {
            followMap[followerId].erase(followeeId);
        }
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
