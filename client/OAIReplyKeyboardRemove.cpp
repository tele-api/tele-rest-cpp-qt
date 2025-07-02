/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#include "OAIReplyKeyboardRemove.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIReplyKeyboardRemove::OAIReplyKeyboardRemove(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIReplyKeyboardRemove::OAIReplyKeyboardRemove() {
    this->initializeModel();
}

OAIReplyKeyboardRemove::~OAIReplyKeyboardRemove() {}

void OAIReplyKeyboardRemove::initializeModel() {

    m_remove_keyboard_isSet = false;
    m_remove_keyboard_isValid = false;

    m_selective_isSet = false;
    m_selective_isValid = false;
}

void OAIReplyKeyboardRemove::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIReplyKeyboardRemove::fromJsonObject(QJsonObject json) {

    m_remove_keyboard_isValid = ::tele_rest::fromJsonValue(m_remove_keyboard, json[QString("remove_keyboard")]);
    m_remove_keyboard_isSet = !json[QString("remove_keyboard")].isNull() && m_remove_keyboard_isValid;

    m_selective_isValid = ::tele_rest::fromJsonValue(m_selective, json[QString("selective")]);
    m_selective_isSet = !json[QString("selective")].isNull() && m_selective_isValid;
}

QString OAIReplyKeyboardRemove::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIReplyKeyboardRemove::asJsonObject() const {
    QJsonObject obj;
    if (m_remove_keyboard_isSet) {
        obj.insert(QString("remove_keyboard"), ::tele_rest::toJsonValue(m_remove_keyboard));
    }
    if (m_selective_isSet) {
        obj.insert(QString("selective"), ::tele_rest::toJsonValue(m_selective));
    }
    return obj;
}

bool OAIReplyKeyboardRemove::isRemoveKeyboard() const {
    return m_remove_keyboard;
}
void OAIReplyKeyboardRemove::setRemoveKeyboard(const bool &remove_keyboard) {
    m_remove_keyboard = remove_keyboard;
    m_remove_keyboard_isSet = true;
}

bool OAIReplyKeyboardRemove::is_remove_keyboard_Set() const{
    return m_remove_keyboard_isSet;
}

bool OAIReplyKeyboardRemove::is_remove_keyboard_Valid() const{
    return m_remove_keyboard_isValid;
}

bool OAIReplyKeyboardRemove::isSelective() const {
    return m_selective;
}
void OAIReplyKeyboardRemove::setSelective(const bool &selective) {
    m_selective = selective;
    m_selective_isSet = true;
}

bool OAIReplyKeyboardRemove::is_selective_Set() const{
    return m_selective_isSet;
}

bool OAIReplyKeyboardRemove::is_selective_Valid() const{
    return m_selective_isValid;
}

bool OAIReplyKeyboardRemove::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_remove_keyboard_isSet) {
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

bool OAIReplyKeyboardRemove::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_remove_keyboard_isValid && true;
}

} // namespace tele_rest
