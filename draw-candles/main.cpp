#include <iostream>
#include <vector>

struct Candlestick {
    double open;
    double high;
    double low;
    double close;
};

void drawCandlestickChart(const std::vector<Candlestick>& data) {
    const int chartWidth = 200;
    const int chartHeight = 200;

    // Find the highest and lowest values in the data
    double minValue = data[0].low;
    double maxValue = data[0].high;
    for (const auto& candle : data) {
        if (candle.low < minValue) {
            minValue = candle.low;
        }
        if (candle.high > maxValue) {
            maxValue = candle.high;
        }
    }

    // Calculate the scaling factors
    double valueRange = maxValue - minValue;
    double verticalScale = chartHeight / valueRange;
    double horizontalScale = chartWidth / static_cast<double>(data.size());

    // Draw the chart
    for (int y = chartHeight - 1; y >= 0; --y) {
        for (std::size_t x = 0; x < data.size(); ++x) {
            double currentValue = data[x].close;

            // Check if the current pixel is within the candlestick range
            if (currentValue >= minValue + (y / verticalScale) && currentValue <= minValue + ((y + 1) / verticalScale)) {
                std::cout << "█"; // ASCII block character
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    // Example data
    std::vector<Candlestick> data = {
        {100.0, 150.0, 80.0, 120.0},
        {200.0, 160.0, 100.0, 140.0},
        {140.0, 170.0, 120.0, 160.0},
        {160.0, 190.0, 130.0, 180.0},
        {120.0, 170.0, 130.0, 180.0},
        {130.0, 180.0, 130.0, 180.0},
        {150.0, 160.0, 140.0, 170.0}
    };

    drawCandlestickChart(data);

    return 0;
}
