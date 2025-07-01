/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIStoryAreaTypeWeather.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIStoryAreaTypeWeather::OAIStoryAreaTypeWeather(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStoryAreaTypeWeather::OAIStoryAreaTypeWeather() {
    this->initializeModel();
}

OAIStoryAreaTypeWeather::~OAIStoryAreaTypeWeather() {}

void OAIStoryAreaTypeWeather::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_temperature_isSet = false;
    m_temperature_isValid = false;

    m_emoji_isSet = false;
    m_emoji_isValid = false;

    m_background_color_isSet = false;
    m_background_color_isValid = false;
}

void OAIStoryAreaTypeWeather::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStoryAreaTypeWeather::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_temperature_isValid = ::tele_rest::fromJsonValue(m_temperature, json[QString("temperature")]);
    m_temperature_isSet = !json[QString("temperature")].isNull() && m_temperature_isValid;

    m_emoji_isValid = ::tele_rest::fromJsonValue(m_emoji, json[QString("emoji")]);
    m_emoji_isSet = !json[QString("emoji")].isNull() && m_emoji_isValid;

    m_background_color_isValid = ::tele_rest::fromJsonValue(m_background_color, json[QString("background_color")]);
    m_background_color_isSet = !json[QString("background_color")].isNull() && m_background_color_isValid;
}

QString OAIStoryAreaTypeWeather::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStoryAreaTypeWeather::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_temperature_isSet) {
        obj.insert(QString("temperature"), ::tele_rest::toJsonValue(m_temperature));
    }
    if (m_emoji_isSet) {
        obj.insert(QString("emoji"), ::tele_rest::toJsonValue(m_emoji));
    }
    if (m_background_color_isSet) {
        obj.insert(QString("background_color"), ::tele_rest::toJsonValue(m_background_color));
    }
    return obj;
}

QString OAIStoryAreaTypeWeather::getType() const {
    return m_type;
}
void OAIStoryAreaTypeWeather::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIStoryAreaTypeWeather::is_type_Set() const{
    return m_type_isSet;
}

bool OAIStoryAreaTypeWeather::is_type_Valid() const{
    return m_type_isValid;
}

double OAIStoryAreaTypeWeather::getTemperature() const {
    return m_temperature;
}
void OAIStoryAreaTypeWeather::setTemperature(const double &temperature) {
    m_temperature = temperature;
    m_temperature_isSet = true;
}

bool OAIStoryAreaTypeWeather::is_temperature_Set() const{
    return m_temperature_isSet;
}

bool OAIStoryAreaTypeWeather::is_temperature_Valid() const{
    return m_temperature_isValid;
}

QString OAIStoryAreaTypeWeather::getEmoji() const {
    return m_emoji;
}
void OAIStoryAreaTypeWeather::setEmoji(const QString &emoji) {
    m_emoji = emoji;
    m_emoji_isSet = true;
}

bool OAIStoryAreaTypeWeather::is_emoji_Set() const{
    return m_emoji_isSet;
}

bool OAIStoryAreaTypeWeather::is_emoji_Valid() const{
    return m_emoji_isValid;
}

qint32 OAIStoryAreaTypeWeather::getBackgroundColor() const {
    return m_background_color;
}
void OAIStoryAreaTypeWeather::setBackgroundColor(const qint32 &background_color) {
    m_background_color = background_color;
    m_background_color_isSet = true;
}

bool OAIStoryAreaTypeWeather::is_background_color_Set() const{
    return m_background_color_isSet;
}

bool OAIStoryAreaTypeWeather::is_background_color_Valid() const{
    return m_background_color_isValid;
}

bool OAIStoryAreaTypeWeather::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_temperature_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_emoji_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_background_color_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIStoryAreaTypeWeather::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_temperature_isValid && m_emoji_isValid && m_background_color_isValid && true;
}

} // namespace tele_rest
