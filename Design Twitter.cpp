class Twitter {
private:
    int time;
    unordered_map<int, unordered_set<int>> followings;
    unordered_map<int, vector<pair<int, int>>> tweets;

public:
    Twitter() {
        time = 0;
    }

    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int, int>> pq;
        followings[userId].insert(userId); // Include self

        for (int followee : followings[userId]) {
            for (auto &tweet : tweets[followee]) {
                pq.push(tweet);
            }
        }

        vector<int> res;
        for (int i = 0; i < 10 && !pq.empty(); ++i) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }

    void follow(int followerId, int followeeId) {
        if (followerId != followeeId)
            followings[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        if (followerId != followeeId)
            followings[followerId].erase(followeeId);
    }
};
