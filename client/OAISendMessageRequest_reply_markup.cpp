/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAISendMessageRequest_reply_markup.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISendMessageRequest_reply_markup::OAISendMessageRequest_reply_markup(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISendMessageRequest_reply_markup::OAISendMessageRequest_reply_markup() {
    this->initializeModel();
}

OAISendMessageRequest_reply_markup::~OAISendMessageRequest_reply_markup() {}

void OAISendMessageRequest_reply_markup::initializeModel() {

    m_inline_keyboard_isSet = false;
    m_inline_keyboard_isValid = false;

    m_keyboard_isSet = false;
    m_keyboard_isValid = false;

    m_remove_keyboard_isSet = false;
    m_remove_keyboard_isValid = false;

    m_force_reply_isSet = false;
    m_force_reply_isValid = false;

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

void OAISendMessageRequest_reply_markup::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISendMessageRequest_reply_markup::fromJsonObject(QJsonObject json) {

    if(json["inline_keyboard"].isArray()){
        auto arr = json["inline_keyboard"].toArray();
        m_inline_keyboard_isValid = true;
        if(arr.count() > 0) {
            for (const QJsonValue jval : arr) {
                QList<OAIInlineKeyboardButton> item;
                m_inline_keyboard_isValid &= ::tele_rest::fromJsonValue(item, jval);
                m_inline_keyboard_isSet = !jval.isNull() && m_inline_keyboard_isValid;
                m_inline_keyboard.push_back(item);
            }
        }
    }

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

    m_remove_keyboard_isValid = ::tele_rest::fromJsonValue(m_remove_keyboard, json[QString("remove_keyboard")]);
    m_remove_keyboard_isSet = !json[QString("remove_keyboard")].isNull() && m_remove_keyboard_isValid;

    m_force_reply_isValid = ::tele_rest::fromJsonValue(m_force_reply, json[QString("force_reply")]);
    m_force_reply_isSet = !json[QString("force_reply")].isNull() && m_force_reply_isValid;

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

QString OAISendMessageRequest_reply_markup::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISendMessageRequest_reply_markup::asJsonObject() const {
    QJsonObject obj;
    if (m_inline_keyboard.size() > 0) {
        
        obj.insert(QString("inline_keyboard"), toJsonValue(m_inline_keyboard));
    }
    if (m_keyboard.size() > 0) {
        
        obj.insert(QString("keyboard"), toJsonValue(m_keyboard));
    }
    if (m_remove_keyboard_isSet) {
        obj.insert(QString("remove_keyboard"), ::tele_rest::toJsonValue(m_remove_keyboard));
    }
    if (m_force_reply_isSet) {
        obj.insert(QString("force_reply"), ::tele_rest::toJsonValue(m_force_reply));
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

QList<QList<OAIInlineKeyboardButton>> OAISendMessageRequest_reply_markup::getInlineKeyboard() const {
    return m_inline_keyboard;
}
void OAISendMessageRequest_reply_markup::setInlineKeyboard(const QList<QList<OAIInlineKeyboardButton>> &inline_keyboard) {
    m_inline_keyboard = inline_keyboard;
    m_inline_keyboard_isSet = true;
}

bool OAISendMessageRequest_reply_markup::is_inline_keyboard_Set() const{
    return m_inline_keyboard_isSet;
}

bool OAISendMessageRequest_reply_markup::is_inline_keyboard_Valid() const{
    return m_inline_keyboard_isValid;
}

QList<QList<OAIKeyboardButton>> OAISendMessageRequest_reply_markup::getKeyboard() const {
    return m_keyboard;
}
void OAISendMessageRequest_reply_markup::setKeyboard(const QList<QList<OAIKeyboardButton>> &keyboard) {
    m_keyboard = keyboard;
    m_keyboard_isSet = true;
}

bool OAISendMessageRequest_reply_markup::is_keyboard_Set() const{
    return m_keyboard_isSet;
}

bool OAISendMessageRequest_reply_markup::is_keyboard_Valid() const{
    return m_keyboard_isValid;
}

bool OAISendMessageRequest_reply_markup::isRemoveKeyboard() const {
    return m_remove_keyboard;
}
void OAISendMessageRequest_reply_markup::setRemoveKeyboard(const bool &remove_keyboard) {
    m_remove_keyboard = remove_keyboard;
    m_remove_keyboard_isSet = true;
}

bool OAISendMessageRequest_reply_markup::is_remove_keyboard_Set() const{
    return m_remove_keyboard_isSet;
}

bool OAISendMessageRequest_reply_markup::is_remove_keyboard_Valid() const{
    return m_remove_keyboard_isValid;
}

bool OAISendMessageRequest_reply_markup::isForceReply() const {
    return m_force_reply;
}
void OAISendMessageRequest_reply_markup::setForceReply(const bool &force_reply) {
    m_force_reply = force_reply;
    m_force_reply_isSet = true;
}

bool OAISendMessageRequest_reply_markup::is_force_reply_Set() const{
    return m_force_reply_isSet;
}

bool OAISendMessageRequest_reply_markup::is_force_reply_Valid() const{
    return m_force_reply_isValid;
}

bool OAISendMessageRequest_reply_markup::isIsPersistent() const {
    return m_is_persistent;
}
void OAISendMessageRequest_reply_markup::setIsPersistent(const bool &is_persistent) {
    m_is_persistent = is_persistent;
    m_is_persistent_isSet = true;
}

bool OAISendMessageRequest_reply_markup::is_is_persistent_Set() const{
    return m_is_persistent_isSet;
}

bool OAISendMessageRequest_reply_markup::is_is_persistent_Valid() const{
    return m_is_persistent_isValid;
}

bool OAISendMessageRequest_reply_markup::isResizeKeyboard() const {
    return m_resize_keyboard;
}
void OAISendMessageRequest_reply_markup::setResizeKeyboard(const bool &resize_keyboard) {
    m_resize_keyboard = resize_keyboard;
    m_resize_keyboard_isSet = true;
}

bool OAISendMessageRequest_reply_markup::is_resize_keyboard_Set() const{
    return m_resize_keyboard_isSet;
}

bool OAISendMessageRequest_reply_markup::is_resize_keyboard_Valid() const{
    return m_resize_keyboard_isValid;
}

bool OAISendMessageRequest_reply_markup::isOneTimeKeyboard() const {
    return m_one_time_keyboard;
}
void OAISendMessageRequest_reply_markup::setOneTimeKeyboard(const bool &one_time_keyboard) {
    m_one_time_keyboard = one_time_keyboard;
    m_one_time_keyboard_isSet = true;
}

bool OAISendMessageRequest_reply_markup::is_one_time_keyboard_Set() const{
    return m_one_time_keyboard_isSet;
}

bool OAISendMessageRequest_reply_markup::is_one_time_keyboard_Valid() const{
    return m_one_time_keyboard_isValid;
}

QString OAISendMessageRequest_reply_markup::getInputFieldPlaceholder() const {
    return m_input_field_placeholder;
}
void OAISendMessageRequest_reply_markup::setInputFieldPlaceholder(const QString &input_field_placeholder) {
    m_input_field_placeholder = input_field_placeholder;
    m_input_field_placeholder_isSet = true;
}

bool OAISendMessageRequest_reply_markup::is_input_field_placeholder_Set() const{
    return m_input_field_placeholder_isSet;
}

bool OAISendMessageRequest_reply_markup::is_input_field_placeholder_Valid() const{
    return m_input_field_placeholder_isValid;
}

bool OAISendMessageRequest_reply_markup::isSelective() const {
    return m_selective;
}
void OAISendMessageRequest_reply_markup::setSelective(const bool &selective) {
    m_selective = selective;
    m_selective_isSet = true;
}

bool OAISendMessageRequest_reply_markup::is_selective_Set() const{
    return m_selective_isSet;
}

bool OAISendMessageRequest_reply_markup::is_selective_Valid() const{
    return m_selective_isValid;
}

bool OAISendMessageRequest_reply_markup::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_inline_keyboard.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_keyboard.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_remove_keyboard_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_force_reply_isSet) {
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

bool OAISendMessageRequest_reply_markup::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_inline_keyboard_isValid && m_keyboard_isValid && m_remove_keyboard_isValid && m_force_reply_isValid && true;
}

} // namespace tele_rest
