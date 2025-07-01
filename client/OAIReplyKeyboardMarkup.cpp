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

#include "OAIReplyKeyboardMarkup.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIReplyKeyboardMarkup::OAIReplyKeyboardMarkup(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIReplyKeyboardMarkup::OAIReplyKeyboardMarkup() {
    this->initializeModel();
}

OAIReplyKeyboardMarkup::~OAIReplyKeyboardMarkup() {}

void OAIReplyKeyboardMarkup::initializeModel() {

    m_keyboard_isSet = false;
    m_keyboard_isValid = false;

    m_is_persistent_isSet = false;
    m_is_persistent_isValid = false;

    m_resize_keyboard_isSet = false;
    m_resize_keyboard_isValid = false;

    m_one_time_keyboard_isSet = false;
    m_one_time_keyboard_isValid = false;

    m_input_field_placeholder_isSet = false;
    m_input_field_placeholder_isValid = false;

    m_selective_isSet = false;
    m_selective_isValid = false;
}

void OAIReplyKeyboardMarkup::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIReplyKeyboardMarkup::fromJsonObject(QJsonObject json) {

    if(json["keyboard"].isArray()){
        auto arr = json["keyboard"].toArray();
        m_keyboard_isValid = true;
        if(arr.count() > 0) {
            for (const QJsonValue jval : arr) {
                QList<OAIKeyboardButton> item;
                m_keyboard_isValid &= ::tele_rest::fromJsonValue(item, jval);
                m_keyboard_isSet = !jval.isNull() && m_keyboard_isValid;
                m_keyboard.push_back(item);
            }
        }
    }

    m_is_persistent_isValid = ::tele_rest::fromJsonValue(m_is_persistent, json[QString("is_persistent")]);
    m_is_persistent_isSet = !json[QString("is_persistent")].isNull() && m_is_persistent_isValid;

    m_resize_keyboard_isValid = ::tele_rest::fromJsonValue(m_resize_keyboard, json[QString("resize_keyboard")]);
    m_resize_keyboard_isSet = !json[QString("resize_keyboard")].isNull() && m_resize_keyboard_isValid;

    m_one_time_keyboard_isValid = ::tele_rest::fromJsonValue(m_one_time_keyboard, json[QString("one_time_keyboard")]);
    m_one_time_keyboard_isSet = !json[QString("one_time_keyboard")].isNull() && m_one_time_keyboard_isValid;

    m_input_field_placeholder_isValid = ::tele_rest::fromJsonValue(m_input_field_placeholder, json[QString("input_field_placeholder")]);
    m_input_field_placeholder_isSet = !json[QString("input_field_placeholder")].isNull() && m_input_field_placeholder_isValid;

    m_selective_isValid = ::tele_rest::fromJsonValue(m_selective, json[QString("selective")]);
    m_selective_isSet = !json[QString("selective")].isNull() && m_selective_isValid;
}

QString OAIReplyKeyboardMarkup::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIReplyKeyboardMarkup::asJsonObject() const {
    QJsonObject obj;
    if (m_keyboard.size() > 0) {
        
        obj.insert(QString("keyboard"), toJsonValue(m_keyboard));
    }
    if (m_is_persistent_isSet) {
        obj.insert(QString("is_persistent"), ::tele_rest::toJsonValue(m_is_persistent));
    }
    if (m_resize_keyboard_isSet) {
        obj.insert(QString("resize_keyboard"), ::tele_rest::toJsonValue(m_resize_keyboard));
    }
    if (m_one_time_keyboard_isSet) {
        obj.insert(QString("one_time_keyboard"), ::tele_rest::toJsonValue(m_one_time_keyboard));
    }
    if (m_input_field_placeholder_isSet) {
        obj.insert(QString("input_field_placeholder"), ::tele_rest::toJsonValue(m_input_field_placeholder));
    }
    if (m_selective_isSet) {
        obj.insert(QString("selective"), ::tele_rest::toJsonValue(m_selective));
    }
    return obj;
}

QList<QList<OAIKeyboardButton>> OAIReplyKeyboardMarkup::getKeyboard() const {
    return m_keyboard;
}
void OAIReplyKeyboardMarkup::setKeyboard(const QList<QList<OAIKeyboardButton>> &keyboard) {
    m_keyboard = keyboard;
    m_keyboard_isSet = true;
}

bool OAIReplyKeyboardMarkup::is_keyboard_Set() const{
    return m_keyboard_isSet;
}

bool OAIReplyKeyboardMarkup::is_keyboard_Valid() const{
    return m_keyboard_isValid;
}

bool OAIReplyKeyboardMarkup::isIsPersistent() const {
    return m_is_persistent;
}
void OAIReplyKeyboardMarkup::setIsPersistent(const bool &is_persistent) {
    m_is_persistent = is_persistent;
    m_is_persistent_isSet = true;
}

bool OAIReplyKeyboardMarkup::is_is_persistent_Set() const{
    return m_is_persistent_isSet;
}

bool OAIReplyKeyboardMarkup::is_is_persistent_Valid() const{
    return m_is_persistent_isValid;
}

bool OAIReplyKeyboardMarkup::isResizeKeyboard() const {
    return m_resize_keyboard;
}
void OAIReplyKeyboardMarkup::setResizeKeyboard(const bool &resize_keyboard) {
    m_resize_keyboard = resize_keyboard;
    m_resize_keyboard_isSet = true;
}

bool OAIReplyKeyboardMarkup::is_resize_keyboard_Set() const{
    return m_resize_keyboard_isSet;
}

bool OAIReplyKeyboardMarkup::is_resize_keyboard_Valid() const{
    return m_resize_keyboard_isValid;
}

bool OAIReplyKeyboardMarkup::isOneTimeKeyboard() const {
    return m_one_time_keyboard;
}
void OAIReplyKeyboardMarkup::setOneTimeKeyboard(const bool &one_time_keyboard) {
    m_one_time_keyboard = one_time_keyboard;
    m_one_time_keyboard_isSet = true;
}

bool OAIReplyKeyboardMarkup::is_one_time_keyboard_Set() const{
    return m_one_time_keyboard_isSet;
}

bool OAIReplyKeyboardMarkup::is_one_time_keyboard_Valid() const{
    return m_one_time_keyboard_isValid;
}

QString OAIReplyKeyboardMarkup::getInputFieldPlaceholder() const {
    return m_input_field_placeholder;
}
void OAIReplyKeyboardMarkup::setInputFieldPlaceholder(const QString &input_field_placeholder) {
    m_input_field_placeholder = input_field_placeholder;
    m_input_field_placeholder_isSet = true;
}

bool OAIReplyKeyboardMarkup::is_input_field_placeholder_Set() const{
    return m_input_field_placeholder_isSet;
}

bool OAIReplyKeyboardMarkup::is_input_field_placeholder_Valid() const{
    return m_input_field_placeholder_isValid;
}

bool OAIReplyKeyboardMarkup::isSelective() const {
    return m_selective;
}
void OAIReplyKeyboardMarkup::setSelective(const bool &selective) {
    m_selective = selective;
    m_selective_isSet = true;
}

bool OAIReplyKeyboardMarkup::is_selective_Set() const{
    return m_selective_isSet;
}

bool OAIReplyKeyboardMarkup::is_selective_Valid() const{
    return m_selective_isValid;
}

bool OAIReplyKeyboardMarkup::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_keyboard.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_persistent_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_resize_keyboard_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_one_time_keyboard_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_input_field_placeholder_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_selective_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIReplyKeyboardMarkup::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_keyboard_isValid && true;
}

} // namespace tele_rest
