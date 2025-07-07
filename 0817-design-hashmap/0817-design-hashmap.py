class MyHashMap(object):

    def __init__(self):
        self.mp = {}  # make mp an instance variable by using self.

    def put(self, key, value):
        """
        :type key: int
        :type value: int
        :rtype: None
        """
        self.mp[key] = value
        

    def get(self, key):
        """
        :type key: int
        :rtype: int
        """
        return self.mp.get(key, -1)  # simpler way than if-else

    def remove(self, key):
        """
        :type key: int
        :rtype: None
        """
        self.mp.pop(key, None)  # use pop with default to avoid KeyError
