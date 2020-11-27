import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    id: pluginBackground
    width: parent.width * 0.97
    height: parent.height * 0.95
    x: (parent.width - width) / 2
    y: (parent.height - height) / 2
    color: "#001E36"
    radius: 30

    PluginForeground {
        id: pluginForeground
    }

    PluginBackgroundTitle {
        id: pluginBackgroundTitle
        x: (pluginForeground.width + (pluginBackground.width - pluginForeground.width) / 2) - width / 2
        y: height
        font.pointSize: 34
    }
}
