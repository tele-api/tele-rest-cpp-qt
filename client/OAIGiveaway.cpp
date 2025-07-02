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

#include "OAIGiveaway.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIGiveaway::OAIGiveaway(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGiveaway::OAIGiveaway() {
    this->initializeModel();
}

OAIGiveaway::~OAIGiveaway() {}

void OAIGiveaway::initializeModel() {

    m_chats_isSet = false;
    m_chats_isValid = false;

    m_winners_selection_date_isSet = false;
    m_winners_selection_date_isValid = false;

    m_winner_count_isSet = false;
    m_winner_count_isValid = false;

    m_only_new_members_isSet = false;
    m_only_new_members_isValid = false;

    m_has_public_winners_isSet = false;
    m_has_public_winners_isValid = false;

    m_prize_description_isSet = false;
    m_prize_description_isValid = false;

    m_country_codes_isSet = false;
    m_country_codes_isValid = false;

    m_prize_star_count_isSet = false;
    m_prize_star_count_isValid = false;

    m_premium_subscription_month_count_isSet = false;
    m_premium_subscription_month_count_isValid = false;
}

void OAIGiveaway::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGiveaway::fromJsonObject(QJsonObject json) {

    m_chats_isValid = ::tele_rest::fromJsonValue(m_chats, json[QString("chats")]);
    m_chats_isSet = !json[QString("chats")].isNull() && m_chats_isValid;

    m_winners_selection_date_isValid = ::tele_rest::fromJsonValue(m_winners_selection_date, json[QString("winners_selection_date")]);
    m_winners_selection_date_isSet = !json[QString("winners_selection_date")].isNull() && m_winners_selection_date_isValid;

    m_winner_count_isValid = ::tele_rest::fromJsonValue(m_winner_count, json[QString("winner_count")]);
    m_winner_count_isSet = !json[QString("winner_count")].isNull() && m_winner_count_isValid;

    m_only_new_members_isValid = ::tele_rest::fromJsonValue(m_only_new_members, json[QString("only_new_members")]);
    m_only_new_members_isSet = !json[QString("only_new_members")].isNull() && m_only_new_members_isValid;

    m_has_public_winners_isValid = ::tele_rest::fromJsonValue(m_has_public_winners, json[QString("has_public_winners")]);
    m_has_public_winners_isSet = !json[QString("has_public_winners")].isNull() && m_has_public_winners_isValid;

    m_prize_description_isValid = ::tele_rest::fromJsonValue(m_prize_description, json[QString("prize_description")]);
    m_prize_description_isSet = !json[QString("prize_description")].isNull() && m_prize_description_isValid;

    m_country_codes_isValid = ::tele_rest::fromJsonValue(m_country_codes, json[QString("country_codes")]);
    m_country_codes_isSet = !json[QString("country_codes")].isNull() && m_country_codes_isValid;

    m_prize_star_count_isValid = ::tele_rest::fromJsonValue(m_prize_star_count, json[QString("prize_star_count")]);
    m_prize_star_count_isSet = !json[QString("prize_star_count")].isNull() && m_prize_star_count_isValid;

    m_premium_subscription_month_count_isValid = ::tele_rest::fromJsonValue(m_premium_subscription_month_count, json[QString("premium_subscription_month_count")]);
    m_premium_subscription_month_count_isSet = !json[QString("premium_subscription_month_count")].isNull() && m_premium_subscription_month_count_isValid;
}

QString OAIGiveaway::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGiveaway::asJsonObject() const {
    QJsonObject obj;
    if (m_chats.size() > 0) {
        obj.insert(QString("chats"), ::tele_rest::toJsonValue(m_chats));
    }
    if (m_winners_selection_date_isSet) {
        obj.insert(QString("winners_selection_date"), ::tele_rest::toJsonValue(m_winners_selection_date));
    }
    if (m_winner_count_isSet) {
        obj.insert(QString("winner_count"), ::tele_rest::toJsonValue(m_winner_count));
    }
    if (m_only_new_members_isSet) {
        obj.insert(QString("only_new_members"), ::tele_rest::toJsonValue(m_only_new_members));
    }
    if (m_has_public_winners_isSet) {
        obj.insert(QString("has_public_winners"), ::tele_rest::toJsonValue(m_has_public_winners));
    }
    if (m_prize_description_isSet) {
        obj.insert(QString("prize_description"), ::tele_rest::toJsonValue(m_prize_description));
    }
    if (m_country_codes.size() > 0) {
        obj.insert(QString("country_codes"), ::tele_rest::toJsonValue(m_country_codes));
    }
    if (m_prize_star_count_isSet) {
        obj.insert(QString("prize_star_count"), ::tele_rest::toJsonValue(m_prize_star_count));
    }
    if (m_premium_subscription_month_count_isSet) {
        obj.insert(QString("premium_subscription_month_count"), ::tele_rest::toJsonValue(m_premium_subscription_month_count));
    }
    return obj;
}

QList<OAIChat> OAIGiveaway::getChats() const {
    return m_chats;
}
void OAIGiveaway::setChats(const QList<OAIChat> &chats) {
    m_chats = chats;
    m_chats_isSet = true;
}

bool OAIGiveaway::is_chats_Set() const{
    return m_chats_isSet;
}

bool OAIGiveaway::is_chats_Valid() const{
    return m_chats_isValid;
}

qint32 OAIGiveaway::getWinnersSelectionDate() const {
    return m_winners_selection_date;
}
void OAIGiveaway::setWinnersSelectionDate(const qint32 &winners_selection_date) {
    m_winners_selection_date = winners_selection_date;
    m_winners_selection_date_isSet = true;
}

bool OAIGiveaway::is_winners_selection_date_Set() const{
    return m_winners_selection_date_isSet;
}

bool OAIGiveaway::is_winners_selection_date_Valid() const{
    return m_winners_selection_date_isValid;
}

qint32 OAIGiveaway::getWinnerCount() const {
    return m_winner_count;
}
void OAIGiveaway::setWinnerCount(const qint32 &winner_count) {
    m_winner_count = winner_count;
    m_winner_count_isSet = true;
}

bool OAIGiveaway::is_winner_count_Set() const{
    return m_winner_count_isSet;
}

bool OAIGiveaway::is_winner_count_Valid() const{
    return m_winner_count_isValid;
}

bool OAIGiveaway::isOnlyNewMembers() const {
    return m_only_new_members;
}
void OAIGiveaway::setOnlyNewMembers(const bool &only_new_members) {
    m_only_new_members = only_new_members;
    m_only_new_members_isSet = true;
}

bool OAIGiveaway::is_only_new_members_Set() const{
    return m_only_new_members_isSet;
}

bool OAIGiveaway::is_only_new_members_Valid() const{
    return m_only_new_members_isValid;
}

bool OAIGiveaway::isHasPublicWinners() const {
    return m_has_public_winners;
}
void OAIGiveaway::setHasPublicWinners(const bool &has_public_winners) {
    m_has_public_winners = has_public_winners;
    m_has_public_winners_isSet = true;
}

bool OAIGiveaway::is_has_public_winners_Set() const{
    return m_has_public_winners_isSet;
}

bool OAIGiveaway::is_has_public_winners_Valid() const{
    return m_has_public_winners_isValid;
}

QString OAIGiveaway::getPrizeDescription() const {
    return m_prize_description;
}
void OAIGiveaway::setPrizeDescription(const QString &prize_description) {
    m_prize_description = prize_description;
    m_prize_description_isSet = true;
}

bool OAIGiveaway::is_prize_description_Set() const{
    return m_prize_description_isSet;
}

bool OAIGiveaway::is_prize_description_Valid() const{
    return m_prize_description_isValid;
}

QList<QString> OAIGiveaway::getCountryCodes() const {
    return m_country_codes;
}
void OAIGiveaway::setCountryCodes(const QList<QString> &country_codes) {
    m_country_codes = country_codes;
    m_country_codes_isSet = true;
}

bool OAIGiveaway::is_country_codes_Set() const{
    return m_country_codes_isSet;
}

bool OAIGiveaway::is_country_codes_Valid() const{
    return m_country_codes_isValid;
}

qint32 OAIGiveaway::getPrizeStarCount() const {
    return m_prize_star_count;
}
void OAIGiveaway::setPrizeStarCount(const qint32 &prize_star_count) {
    m_prize_star_count = prize_star_count;
    m_prize_star_count_isSet = true;
}

bool OAIGiveaway::is_prize_star_count_Set() const{
    return m_prize_star_count_isSet;
}

bool OAIGiveaway::is_prize_star_count_Valid() const{
    return m_prize_star_count_isValid;
}

qint32 OAIGiveaway::getPremiumSubscriptionMonthCount() const {
    return m_premium_subscription_month_count;
}
void OAIGiveaway::setPremiumSubscriptionMonthCount(const qint32 &premium_subscription_month_count) {
    m_premium_subscription_month_count = premium_subscription_month_count;
    m_premium_subscription_month_count_isSet = true;
}

bool OAIGiveaway::is_premium_subscription_month_count_Set() const{
    return m_premium_subscription_month_count_isSet;
}

bool OAIGiveaway::is_premium_subscription_month_count_Valid() const{
    return m_premium_subscription_month_count_isValid;
}

bool OAIGiveaway::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_chats.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_winners_selection_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_winner_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_only_new_members_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_public_winners_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_prize_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_country_codes.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_prize_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_premium_subscription_month_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGiveaway::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_chats_isValid && m_winners_selection_date_isValid && m_winner_count_isValid && true;
}

} // namespace tele_rest
