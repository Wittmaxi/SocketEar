#include "header/socketear.hpp"

namespace SEA {
Socket::Socket(SocketType type) : socketFDes (socket (AF_INET, static_cast<int> (type), 0))
{
}

int Socket::getFileDescriptor() {
    return socketFDes;
}
}