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

#include "OAIOwnedGiftRegular.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIOwnedGiftRegular::OAIOwnedGiftRegular(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOwnedGiftRegular::OAIOwnedGiftRegular() {
    this->initializeModel();
}

OAIOwnedGiftRegular::~OAIOwnedGiftRegular() {}

void OAIOwnedGiftRegular::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_gift_isSet = false;
    m_gift_isValid = false;

    m_send_date_isSet = false;
    m_send_date_isValid = false;

    m_owned_gift_id_isSet = false;
    m_owned_gift_id_isValid = false;

    m_sender_user_isSet = false;
    m_sender_user_isValid = false;

    m_text_isSet = false;
    m_text_isValid = false;

    m_entities_isSet = false;
    m_entities_isValid = false;

    m_is_private_isSet = false;
    m_is_private_isValid = false;

    m_is_saved_isSet = false;
    m_is_saved_isValid = false;

    m_can_be_upgraded_isSet = false;
    m_can_be_upgraded_isValid = false;

    m_was_refunded_isSet = false;
    m_was_refunded_isValid = false;

    m_convert_star_count_isSet = false;
    m_convert_star_count_isValid = false;

    m_prepaid_upgrade_star_count_isSet = false;
    m_prepaid_upgrade_star_count_isValid = false;
}

void OAIOwnedGiftRegular::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOwnedGiftRegular::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_gift_isValid = ::tele_rest::fromJsonValue(m_gift, json[QString("gift")]);
    m_gift_isSet = !json[QString("gift")].isNull() && m_gift_isValid;

    m_send_date_isValid = ::tele_rest::fromJsonValue(m_send_date, json[QString("send_date")]);
    m_send_date_isSet = !json[QString("send_date")].isNull() && m_send_date_isValid;

    m_owned_gift_id_isValid = ::tele_rest::fromJsonValue(m_owned_gift_id, json[QString("owned_gift_id")]);
    m_owned_gift_id_isSet = !json[QString("owned_gift_id")].isNull() && m_owned_gift_id_isValid;

    m_sender_user_isValid = ::tele_rest::fromJsonValue(m_sender_user, json[QString("sender_user")]);
    m_sender_user_isSet = !json[QString("sender_user")].isNull() && m_sender_user_isValid;

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_entities_isValid = ::tele_rest::fromJsonValue(m_entities, json[QString("entities")]);
    m_entities_isSet = !json[QString("entities")].isNull() && m_entities_isValid;

    m_is_private_isValid = ::tele_rest::fromJsonValue(m_is_private, json[QString("is_private")]);
    m_is_private_isSet = !json[QString("is_private")].isNull() && m_is_private_isValid;

    m_is_saved_isValid = ::tele_rest::fromJsonValue(m_is_saved, json[QString("is_saved")]);
    m_is_saved_isSet = !json[QString("is_saved")].isNull() && m_is_saved_isValid;

    m_can_be_upgraded_isValid = ::tele_rest::fromJsonValue(m_can_be_upgraded, json[QString("can_be_upgraded")]);
    m_can_be_upgraded_isSet = !json[QString("can_be_upgraded")].isNull() && m_can_be_upgraded_isValid;

    m_was_refunded_isValid = ::tele_rest::fromJsonValue(m_was_refunded, json[QString("was_refunded")]);
    m_was_refunded_isSet = !json[QString("was_refunded")].isNull() && m_was_refunded_isValid;

    m_convert_star_count_isValid = ::tele_rest::fromJsonValue(m_convert_star_count, json[QString("convert_star_count")]);
    m_convert_star_count_isSet = !json[QString("convert_star_count")].isNull() && m_convert_star_count_isValid;

    m_prepaid_upgrade_star_count_isValid = ::tele_rest::fromJsonValue(m_prepaid_upgrade_star_count, json[QString("prepaid_upgrade_star_count")]);
    m_prepaid_upgrade_star_count_isSet = !json[QString("prepaid_upgrade_star_count")].isNull() && m_prepaid_upgrade_star_count_isValid;
}

QString OAIOwnedGiftRegular::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOwnedGiftRegular::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_gift.isSet()) {
        obj.insert(QString("gift"), ::tele_rest::toJsonValue(m_gift));
    }
    if (m_send_date_isSet) {
        obj.insert(QString("send_date"), ::tele_rest::toJsonValue(m_send_date));
    }
    if (m_owned_gift_id_isSet) {
        obj.insert(QString("owned_gift_id"), ::tele_rest::toJsonValue(m_owned_gift_id));
    }
    if (m_sender_user.isSet()) {
        obj.insert(QString("sender_user"), ::tele_rest::toJsonValue(m_sender_user));
    }
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_entities.size() > 0) {
        obj.insert(QString("entities"), ::tele_rest::toJsonValue(m_entities));
    }
    if (m_is_private_isSet) {
        obj.insert(QString("is_private"), ::tele_rest::toJsonValue(m_is_private));
    }
    if (m_is_saved_isSet) {
        obj.insert(QString("is_saved"), ::tele_rest::toJsonValue(m_is_saved));
    }
    if (m_can_be_upgraded_isSet) {
        obj.insert(QString("can_be_upgraded"), ::tele_rest::toJsonValue(m_can_be_upgraded));
    }
    if (m_was_refunded_isSet) {
        obj.insert(QString("was_refunded"), ::tele_rest::toJsonValue(m_was_refunded));
    }
    if (m_convert_star_count_isSet) {
        obj.insert(QString("convert_star_count"), ::tele_rest::toJsonValue(m_convert_star_count));
    }
    if (m_prepaid_upgrade_star_count_isSet) {
        obj.insert(QString("prepaid_upgrade_star_count"), ::tele_rest::toJsonValue(m_prepaid_upgrade_star_count));
    }
    return obj;
}

QString OAIOwnedGiftRegular::getType() const {
    return m_type;
}
void OAIOwnedGiftRegular::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIOwnedGiftRegular::is_type_Set() const{
    return m_type_isSet;
}

bool OAIOwnedGiftRegular::is_type_Valid() const{
    return m_type_isValid;
}

OAIGift OAIOwnedGiftRegular::getGift() const {
    return m_gift;
}
void OAIOwnedGiftRegular::setGift(const OAIGift &gift) {
    m_gift = gift;
    m_gift_isSet = true;
}

bool OAIOwnedGiftRegular::is_gift_Set() const{
    return m_gift_isSet;
}

bool OAIOwnedGiftRegular::is_gift_Valid() const{
    return m_gift_isValid;
}

qint32 OAIOwnedGiftRegular::getSendDate() const {
    return m_send_date;
}
void OAIOwnedGiftRegular::setSendDate(const qint32 &send_date) {
    m_send_date = send_date;
    m_send_date_isSet = true;
}

bool OAIOwnedGiftRegular::is_send_date_Set() const{
    return m_send_date_isSet;
}

bool OAIOwnedGiftRegular::is_send_date_Valid() const{
    return m_send_date_isValid;
}

QString OAIOwnedGiftRegular::getOwnedGiftId() const {
    return m_owned_gift_id;
}
void OAIOwnedGiftRegular::setOwnedGiftId(const QString &owned_gift_id) {
    m_owned_gift_id = owned_gift_id;
    m_owned_gift_id_isSet = true;
}

bool OAIOwnedGiftRegular::is_owned_gift_id_Set() const{
    return m_owned_gift_id_isSet;
}

bool OAIOwnedGiftRegular::is_owned_gift_id_Valid() const{
    return m_owned_gift_id_isValid;
}

OAIUser OAIOwnedGiftRegular::getSenderUser() const {
    return m_sender_user;
}
void OAIOwnedGiftRegular::setSenderUser(const OAIUser &sender_user) {
    m_sender_user = sender_user;
    m_sender_user_isSet = true;
}

bool OAIOwnedGiftRegular::is_sender_user_Set() const{
    return m_sender_user_isSet;
}

bool OAIOwnedGiftRegular::is_sender_user_Valid() const{
    return m_sender_user_isValid;
}

QString OAIOwnedGiftRegular::getText() const {
    return m_text;
}
void OAIOwnedGiftRegular::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAIOwnedGiftRegular::is_text_Set() const{
    return m_text_isSet;
}

bool OAIOwnedGiftRegular::is_text_Valid() const{
    return m_text_isValid;
}

QList<OAIMessageEntity> OAIOwnedGiftRegular::getEntities() const {
    return m_entities;
}
void OAIOwnedGiftRegular::setEntities(const QList<OAIMessageEntity> &entities) {
    m_entities = entities;
    m_entities_isSet = true;
}

bool OAIOwnedGiftRegular::is_entities_Set() const{
    return m_entities_isSet;
}

bool OAIOwnedGiftRegular::is_entities_Valid() const{
    return m_entities_isValid;
}

bool OAIOwnedGiftRegular::isIsPrivate() const {
    return m_is_private;
}
void OAIOwnedGiftRegular::setIsPrivate(const bool &is_private) {
    m_is_private = is_private;
    m_is_private_isSet = true;
}

bool OAIOwnedGiftRegular::is_is_private_Set() const{
    return m_is_private_isSet;
}

bool OAIOwnedGiftRegular::is_is_private_Valid() const{
    return m_is_private_isValid;
}

bool OAIOwnedGiftRegular::isIsSaved() const {
    return m_is_saved;
}
void OAIOwnedGiftRegular::setIsSaved(const bool &is_saved) {
    m_is_saved = is_saved;
    m_is_saved_isSet = true;
}

bool OAIOwnedGiftRegular::is_is_saved_Set() const{
    return m_is_saved_isSet;
}

bool OAIOwnedGiftRegular::is_is_saved_Valid() const{
    return m_is_saved_isValid;
}

bool OAIOwnedGiftRegular::isCanBeUpgraded() const {
    return m_can_be_upgraded;
}
void OAIOwnedGiftRegular::setCanBeUpgraded(const bool &can_be_upgraded) {
    m_can_be_upgraded = can_be_upgraded;
    m_can_be_upgraded_isSet = true;
}

bool OAIOwnedGiftRegular::is_can_be_upgraded_Set() const{
    return m_can_be_upgraded_isSet;
}

bool OAIOwnedGiftRegular::is_can_be_upgraded_Valid() const{
    return m_can_be_upgraded_isValid;
}

bool OAIOwnedGiftRegular::isWasRefunded() const {
    return m_was_refunded;
}
void OAIOwnedGiftRegular::setWasRefunded(const bool &was_refunded) {
    m_was_refunded = was_refunded;
    m_was_refunded_isSet = true;
}

bool OAIOwnedGiftRegular::is_was_refunded_Set() const{
    return m_was_refunded_isSet;
}

bool OAIOwnedGiftRegular::is_was_refunded_Valid() const{
    return m_was_refunded_isValid;
}

qint32 OAIOwnedGiftRegular::getConvertStarCount() const {
    return m_convert_star_count;
}
void OAIOwnedGiftRegular::setConvertStarCount(const qint32 &convert_star_count) {
    m_convert_star_count = convert_star_count;
    m_convert_star_count_isSet = true;
}

bool OAIOwnedGiftRegular::is_convert_star_count_Set() const{
    return m_convert_star_count_isSet;
}

bool OAIOwnedGiftRegular::is_convert_star_count_Valid() const{
    return m_convert_star_count_isValid;
}

qint32 OAIOwnedGiftRegular::getPrepaidUpgradeStarCount() const {
    return m_prepaid_upgrade_star_count;
}
void OAIOwnedGiftRegular::setPrepaidUpgradeStarCount(const qint32 &prepaid_upgrade_star_count) {
    m_prepaid_upgrade_star_count = prepaid_upgrade_star_count;
    m_prepaid_upgrade_star_count_isSet = true;
}

bool OAIOwnedGiftRegular::is_prepaid_upgrade_star_count_Set() const{
    return m_prepaid_upgrade_star_count_isSet;
}

bool OAIOwnedGiftRegular::is_prepaid_upgrade_star_count_Valid() const{
    return m_prepaid_upgrade_star_count_isValid;
}

bool OAIOwnedGiftRegular::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gift.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_send_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_owned_gift_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sender_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_private_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_saved_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_be_upgraded_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_was_refunded_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_convert_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_prepaid_upgrade_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOwnedGiftRegular::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_gift_isValid && m_send_date_isValid && true;
}

} // namespace tele_rest
