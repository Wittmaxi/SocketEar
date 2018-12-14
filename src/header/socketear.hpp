#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

namespace SEA
{
class SocketAddr;

enum class SocketType
{
    TCP = SOCK_STREAM,
    UDP = SOCK_DGRAM
};
class Socket
{
  public:
    Socket(SocketType type);
    int getFileDescriptor();
  private:
    int socketFDes;
};

class SocketAddr {
    public: 
        
    private:
};
} // namespace SEA