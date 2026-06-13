#pragma once

#include <string>
#include <string_view>

class PamAuthenticator {
public:
  struct Result {
    bool success = false;
    std::string message;
  };

  [[nodiscard]] static Result authenticateCurrentUser(std::string_view password);
  [[nodiscard]] static std::string currentUsername();
};
