// 利用enum 改寫之前的log
#include <iostream>

class Log {
public:
    // public member variable
    enum class Level {
        Error = 0, Warning, Info
    };
private:
    // member private variable
    Level m_LogLevel = Level::Info;
public:
    // public member function
    void SetLevel(Level level)
    {
        m_LogLevel = level;
    }
    void Error(const char* message)
    {
        if (m_LogLevel >= Level::Error)
        {
            std::cout << "[Error]: " << message << std::endl;
        }
    }
    void Warn(const char* message)
    {
        if (m_LogLevel >= Level::Warning)
        {
            std::cout << "[Warn]: " << message << std::endl;
        }
    }
    void Info(const char* message)
    {
        if (m_LogLevel >= Level::Info)
        {
            std::cout << "[Info]: " << message << std::endl;
        }
    }

};


int  main()
{
    Log log;
    log.SetLevel(Log::Level::Warning);
    std::string message = "Hello";
    log.Info(message.c_str());
    log.Warn(message.c_str());
    log.Error(message.c_str());
    std::cin.get();
    return 0;
}