class UserSession:
    timeOut = 3600
    
    # def __init__(self, user_id,token):
    #     self.used_id = user_id
    #     self.token = token
    
    @classmethod
    def from_token(cls,token):
        userID = token.split(':')[0]
        return cls(userID,token)
    
    @classmethod
    def from_cache(cls,cache_data):
        return cls(cache_data["user_id"],cache_data["token"])
    
    @classmethod
    def test_amit(cls,amit_data):
        ssobj = cls()
        ssobj._data = amit_data
        return ssobj
    


